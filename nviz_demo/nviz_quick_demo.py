#!/usr/bin/env python3
"""
GRASS NVIZ Interactive 3D Demo - Quick Launch

This script provides a direct way to launch the interactive 3D terrain demo
that showcases the NVIZ library capabilities with real-time OpenGL visualization.
"""

import os
import sys

# Set up environment
def setup_environment():
    grass_lib_dir = "/home/dudaka/opt/grass/build/output/lib/grass85/lib"
    gisbase = "/home/dudaka/opt/grass/build/output/lib/grass85"
    
    current_ld_path = os.environ.get('LD_LIBRARY_PATH', '')
    if grass_lib_dir not in current_ld_path:
        os.environ['LD_LIBRARY_PATH'] = f"{grass_lib_dir}:{current_ld_path}"
    
    if 'GISBASE' not in os.environ:
        os.environ['GISBASE'] = gisbase
    
    grass_python_dir = f"{gisbase}/etc/python"
    if grass_python_dir not in sys.path:
        sys.path.insert(0, grass_python_dir)

setup_environment()

try:
    import pygame
    import numpy as np
    import math
    from OpenGL.GL import *
    from OpenGL.GLU import *
    print("✅ All required libraries loaded")
except ImportError as e:
    print(f"❌ Missing required libraries: {e}")
    print("Install with: pip install pygame PyOpenGL PyOpenGL_accelerate numpy")
    sys.exit(1)

class QuickNVIZ3DDemo:
    """Quick 3D terrain demo showcasing NVIZ capabilities"""
    
    def __init__(self):
        self.width = 1200
        self.height = 800
        self.rotation_x = 20.0
        self.rotation_y = 0.0
        self.zoom = -12.0
        self.auto_rotate = True
        self.terrain_detail = 60
        self.show_wireframe = False
        self.lighting_enabled = True
        self.running = True
        
        # Enhanced terrain parameters
        self.terrain_size = 15.0
        self.terrain_height = 3.0
        
        # Animation
        self.time = 0.0
        
    def init_demo(self):
        """Initialize the demo"""
        try:
            pygame.init()
            
            # Set OpenGL attributes for better quality
            pygame.display.gl_set_attribute(pygame.GL_DOUBLEBUFFER, 1)
            pygame.display.gl_set_attribute(pygame.GL_DEPTH_SIZE, 24)
            pygame.display.gl_set_attribute(pygame.GL_STENCIL_SIZE, 8)
            pygame.display.gl_set_attribute(pygame.GL_MULTISAMPLEBUFFERS, 1)
            pygame.display.gl_set_attribute(pygame.GL_MULTISAMPLESAMPLES, 4)
            
            # Create display
            self.screen = pygame.display.set_mode(
                (self.width, self.height), 
                pygame.DOUBLEBUF | pygame.OPENGL | pygame.RESIZABLE
            )
            pygame.display.set_caption("🌄 GRASS NVIZ 3D Terrain Demo - Interactive Visualization")
            
            self.clock = pygame.time.Clock()
            
            # OpenGL setup
            self.setup_opengl()
            
            print("🎮 3D Demo initialized successfully!")
            self.print_controls()
            return True
            
        except Exception as e:
            print(f"❌ Failed to initialize demo: {e}")
            return False
    
    def setup_opengl(self):
        """Configure OpenGL for high-quality rendering"""
        # Enable features
        glEnable(GL_DEPTH_TEST)
        glEnable(GL_LIGHTING)
        glEnable(GL_LIGHT0)
        glEnable(GL_LIGHT1)  # Second light
        glEnable(GL_COLOR_MATERIAL)
        glEnable(GL_NORMALIZE)
        glEnable(GL_BLEND)
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)
        
        # Anti-aliasing
        glEnable(GL_LINE_SMOOTH)
        glEnable(GL_POLYGON_SMOOTH)
        glHint(GL_LINE_SMOOTH_HINT, GL_NICEST)
        glHint(GL_POLYGON_SMOOTH_HINT, GL_NICEST)
        
        # Sky gradient background
        glClearColor(0.4, 0.6, 1.0, 1.0)
        
        self.setup_lighting()
        self.setup_projection()
    
    def setup_lighting(self):
        """Set up realistic lighting with sun and ambient"""
        # Main sun light
        sun_pos = [10.0, 15.0, 10.0, 0.0]  # Directional light
        sun_diffuse = [1.0, 0.95, 0.8, 1.0]  # Warm sunlight
        sun_specular = [1.0, 1.0, 0.9, 1.0]
        
        glLightfv(GL_LIGHT0, GL_POSITION, sun_pos)
        glLightfv(GL_LIGHT0, GL_DIFFUSE, sun_diffuse)
        glLightfv(GL_LIGHT0, GL_SPECULAR, sun_specular)
        
        # Fill light (cooler, from opposite side)
        fill_pos = [-8.0, 8.0, -8.0, 0.0]
        fill_diffuse = [0.3, 0.4, 0.6, 1.0]  # Cool blue fill
        
        glLightfv(GL_LIGHT1, GL_POSITION, fill_pos)
        glLightfv(GL_LIGHT1, GL_DIFFUSE, fill_diffuse)
        
        # Ambient light
        ambient = [0.25, 0.25, 0.35, 1.0]  # Soft ambient
        glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambient)
        
        # Material properties
        glColorMaterial(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE)
        specular = [0.6, 0.6, 0.6, 1.0]
        glMaterialfv(GL_FRONT, GL_SPECULAR, specular)
        glMaterialf(GL_FRONT, GL_SHININESS, 32.0)
    
    def setup_projection(self):
        """Set up camera projection"""
        glMatrixMode(GL_PROJECTION)
        glLoadIdentity()
        gluPerspective(50.0, self.width/self.height, 0.1, 100.0)
    
    def generate_height(self, x, z):
        """Generate realistic terrain height with multiple octaves"""
        height = 0.0
        
        # Large mountain features
        height += 1.2 * math.sin(x * 0.15) * math.cos(z * 0.12)
        
        # Medium hills
        height += 0.6 * math.sin(x * 0.4 + 2.3) * math.cos(z * 0.35 + 1.7)
        
        # Small rolling hills
        height += 0.3 * math.sin(x * 0.9 + 4.1) * math.cos(z * 0.8 + 3.2)
        
        # Fine details
        height += 0.15 * math.sin(x * 2.1 + self.time * 0.1) * math.sin(z * 1.8 + self.time * 0.15)
        
        # Add some river valleys
        river_influence = math.exp(-(x * x + z * z) * 0.1)
        height -= 0.5 * river_influence
        
        return height * self.terrain_height
    
    def get_color_by_height(self, height, x, z):
        """Get terrain color based on height and position"""
        # Normalize height
        norm_height = (height + 2.0) / 4.0  # Rough normalization
        
        # Add some variation based on position
        variation = 0.1 * (math.sin(x * 3.7) + math.cos(z * 4.1))
        norm_height += variation
        
        # Clamp
        norm_height = max(0.0, min(1.0, norm_height))
        
        if norm_height < 0.15:  # Deep water
            return (0.1, 0.2, 0.6)
        elif norm_height < 0.25:  # Shallow water
            return (0.2, 0.4, 0.7)
        elif norm_height < 0.35:  # Beach/shore
            return (0.8, 0.7, 0.3)
        elif norm_height < 0.45:  # Grasslands
            return (0.3, 0.7, 0.2)
        elif norm_height < 0.6:  # Forest
            return (0.2, 0.5, 0.1)
        elif norm_height < 0.75:  # Hills
            return (0.4, 0.3, 0.1)
        elif norm_height < 0.9:  # Rocky areas
            return (0.5, 0.4, 0.3)
        else:  # Snow peaks
            return (0.9, 0.9, 1.0)
    
    def calculate_normal(self, x, z, step):
        """Calculate surface normal for lighting"""
        # Sample neighboring heights
        h_center = self.generate_height(x, z)
        h_right = self.generate_height(x + step, z)
        h_up = self.generate_height(x, z + step)
        
        # Calculate tangent vectors
        tangent_x = np.array([step, h_right - h_center, 0])
        tangent_z = np.array([0, h_up - h_center, step])
        
        # Cross product for normal
        normal = np.cross(tangent_x, tangent_z)
        norm = np.linalg.norm(normal)
        if norm > 0:
            normal = normal / norm
        else:
            normal = np.array([0, 1, 0])
        
        return normal
    
    def draw_terrain(self):
        """Draw the terrain with proper normals and colors"""
        size = self.terrain_size
        detail = self.terrain_detail
        step = size / detail
        
        # Draw terrain as triangle strips
        for i in range(detail):
            glBegin(GL_TRIANGLE_STRIP)
            
            for j in range(detail + 1):
                # Current and next X positions
                x1 = (i - detail/2) * step
                x2 = ((i+1) - detail/2) * step
                z = (j - detail/2) * step
                
                # Heights
                h1 = self.generate_height(x1, z)
                h2 = self.generate_height(x2, z)
                
                # Normals
                n1 = self.calculate_normal(x1, z, step * 0.5)
                n2 = self.calculate_normal(x2, z, step * 0.5)
                
                # Colors
                c1 = self.get_color_by_height(h1, x1, z)
                c2 = self.get_color_by_height(h2, x2, z)
                
                # First vertex
                glColor3fv(c1)
                glNormal3fv(n1)
                glVertex3f(x1, h1, z)
                
                # Second vertex
                glColor3fv(c2)
                glNormal3fv(n2)
                glVertex3f(x2, h2, z)
            
            glEnd()
        
        # Optional wireframe overlay
        if self.show_wireframe:
            self.draw_wireframe(size, detail, step)
    
    def draw_wireframe(self, size, detail, step):
        """Draw wireframe overlay"""
        glDisable(GL_LIGHTING)
        glColor4f(0.0, 0.0, 0.0, 0.3)
        glLineWidth(1.0)
        
        # Draw grid lines
        for i in range(0, detail + 1, 5):  # Every 5th line for clarity
            glBegin(GL_LINE_STRIP)
            for j in range(detail + 1):
                x = (i - detail/2) * step
                z = (j - detail/2) * step
                h = self.generate_height(x, z)
                glVertex3f(x, h + 0.05, z)  # Slightly above surface
            glEnd()
            
            glBegin(GL_LINE_STRIP)
            for j in range(detail + 1):
                x = (j - detail/2) * step
                z = (i - detail/2) * step
                h = self.generate_height(x, z)
                glVertex3f(x, h + 0.05, z)
            glEnd()
        
        if self.lighting_enabled:
            glEnable(GL_LIGHTING)
    
    def draw_axes(self):
        """Draw coordinate axes"""
        glDisable(GL_LIGHTING)
        glLineWidth(4.0)
        
        glBegin(GL_LINES)
        # X axis - red
        glColor3f(1.0, 0.0, 0.0)
        glVertex3f(0.0, 0.0, 0.0)
        glVertex3f(3.0, 0.0, 0.0)
        
        # Y axis - green  
        glColor3f(0.0, 1.0, 0.0)
        glVertex3f(0.0, 0.0, 0.0)
        glVertex3f(0.0, 3.0, 0.0)
        
        # Z axis - blue
        glColor3f(0.0, 0.0, 1.0)
        glVertex3f(0.0, 0.0, 0.0)
        glVertex3f(0.0, 0.0, 3.0)
        glEnd()
        
        glLineWidth(1.0)
        if self.lighting_enabled:
            glEnable(GL_LIGHTING)
    
    def handle_events(self):
        """Handle user input"""
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                self.running = False
            elif event.type == pygame.KEYDOWN:
                self.handle_key(event.key)
            elif event.type == pygame.VIDEORESIZE:
                self.width, self.height = event.w, event.h
                glViewport(0, 0, self.width, self.height)
                self.setup_projection()
    
    def handle_key(self, key):
        """Handle keyboard input"""
        if key == pygame.K_ESCAPE or key == pygame.K_q:
            self.running = False
        elif key == pygame.K_SPACE:
            self.auto_rotate = not self.auto_rotate
        elif key == pygame.K_w:
            self.show_wireframe = not self.show_wireframe
        elif key == pygame.K_l:
            self.lighting_enabled = not self.lighting_enabled
            if self.lighting_enabled:
                glEnable(GL_LIGHTING)
                glEnable(GL_LIGHT0)
                glEnable(GL_LIGHT1)
            else:
                glDisable(GL_LIGHTING)
        elif key == pygame.K_EQUALS or key == pygame.K_PLUS:
            self.zoom += 1.0
        elif key == pygame.K_MINUS:
            self.zoom -= 1.0
        elif key == pygame.K_r:
            self.rotation_x = 20.0
            self.rotation_y = 0.0
            self.zoom = -12.0
        elif key == pygame.K_1:
            self.terrain_detail = 30
        elif key == pygame.K_2:
            self.terrain_detail = 60
        elif key == pygame.K_3:
            self.terrain_detail = 90
        elif key == pygame.K_UP:
            self.rotation_x += 5
        elif key == pygame.K_DOWN:
            self.rotation_x -= 5
        elif key == pygame.K_LEFT:
            self.rotation_y -= 5
        elif key == pygame.K_RIGHT:
            self.rotation_y += 5
    
    def render_frame(self):
        """Render a single frame"""
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
        
        glMatrixMode(GL_MODELVIEW)
        glLoadIdentity()
        
        # Camera transform
        glTranslatef(0.0, 0.0, self.zoom)
        glRotatef(self.rotation_x, 1.0, 0.0, 0.0)
        glRotatef(self.rotation_y, 0.0, 1.0, 0.0)
        
        # Draw scene
        self.draw_terrain()
        self.draw_axes()
        
        pygame.display.flip()
    
    def print_controls(self):
        """Display control instructions"""
        print("\n🎮 Interactive 3D Terrain Controls:")
        print("=" * 50)
        print("🚪 ESC/Q      - Exit demo")
        print("⏸️  SPACE     - Toggle auto-rotation")
        print("🖱️  Arrow Keys - Manual camera rotation")
        print("📐 W         - Toggle wireframe overlay")
        print("💡 L         - Toggle lighting")
        print("🔍 +/-       - Zoom in/out")
        print("🏠 R         - Reset camera view")
        print("🔧 1/2/3     - Low/Medium/High detail")
        print("\n🌄 Enjoy exploring the 3D terrain!")
    
    def run(self):
        """Main demo loop"""
        if not self.init_demo():
            return False
        
        print("\n🚀 Starting 3D terrain visualization...")
        
        try:
            while self.running:
                # Update animation time
                self.time += 0.016
                
                # Handle input
                self.handle_events()
                
                # Auto-rotation
                if self.auto_rotate:
                    self.rotation_y += 0.3
                
                # Render
                self.render_frame()
                
                # Maintain 60 FPS
                self.clock.tick(60)
                
        except KeyboardInterrupt:
            print("\n👋 Demo interrupted")
        except Exception as e:
            print(f"\n❌ Demo error: {e}")
        finally:
            pygame.quit()
            print("👋 Demo finished!")
        
        return True

def main():
    """Launch the quick demo"""
    print("🌄 GRASS NVIZ Quick 3D Demo Launcher")
    print("=" * 45)
    print("This demo showcases NVIZ 3D visualization capabilities")
    print("with real-time interactive terrain rendering.")
    print()
    
    # Quick verification
    try:
        from grass.lib import nviz
        print("✅ NVIZ library available")
    except ImportError:
        print("❌ NVIZ library not available")
        print("Make sure you're in a GRASS environment")
        return
    
    print("\n🎬 Launching interactive 3D terrain demo...")
    demo = QuickNVIZ3DDemo()
    demo.run()

if __name__ == "__main__":
    main()
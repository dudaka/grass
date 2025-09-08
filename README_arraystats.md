python C:/opt/grass/python/libgrass_interface_generator/run.py ^
    --cpp "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe -E /D_CRT_SECURE_NO_WARNINGS /DNOMINMAX /DGRASS_CMAKE_BUILD=1 /DWIN32 /D_WINDOWS" ^
    --no-embed-preamble ^
    --compile-libdir "C:\opt\grass\build\output\lib\grass85\lib" ^
    --runtime-libdir "C:\opt\grass\build\output\lib\grass85\lib" ^
    --debug-level 1 ^
    --strip-build-path "C:/opt/grass/build/output/lib/grass85" ^
    -I"C:/Program Files (x86)/GRASS/include" ^
    -I"C:/opt/grass/build/output/lib/grass85/include" ^
    -lgrass_arraystats ^
    -o "C:/opt/grass/build/output/lib/grass85/etc/python/grass/lib/arraystats.py" ^
    "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h" ^
    "C:/opt/grass/build/output/lib/grass85/include/grass/defs/arraystats.h"


python C:/opt/grass/python/libgrass_interface_generator/run.py ^
    --cpp "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe -E /D_CRT_SECURE_NO_WARNINGS /DNOMINMAX /DGRASS_CMAKE_BUILD=1 /DWIN32 /D_WINDOWS" ^
    --no-embed-preamble ^
    --compile-libdir "C:\opt\grass\build\output\lib\grass85\lib" ^
    --runtime-libdir "C:\opt\grass\build\output\lib\grass85\lib" ^
    --strip-build-path "C:/opt/grass/build/output/lib/grass85" ^
    -I"C:/Program Files (x86)/GRASS/include" ^
    -I"C:/opt/grass/build/output/lib/grass85/include" ^
    -lgrass_arraystats ^
    -o "C:/opt/grass/build/output/lib/grass85/etc/python/grass/lib/arraystats.py" ^
    "C:/opt/grass/build/output/lib/grass85/include/grass/arraystats.h" ^
    "C:/opt/grass/build/output/lib/grass85/include/grass/defs/arraystats.h"


"C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe" -E /D_CRT_SECURE_NO_WARNINGS /DNOMINMAX /DGRASS_CMAKE_BUILD=1 /DWIN32 /D_WINDOWS -U __GNUC__ -nologo -d1PP -I"C:/Program Files (x86)/GRASS/include" -I"C:/opt/grass/build/output/lib/grass85/include" "-D__extension__=" "-D__const=const" "-D__asm__(x)=" "-D__asm(x)=" "-DCTYPESGEN=1" "C:\opt\grass\tmp_header.h"

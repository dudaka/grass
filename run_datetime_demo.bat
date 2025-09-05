@echo off
REM Batch script to run the GRASS DateTime demo
REM This script sets up the environment and runs the Python demo

echo GRASS DateTime Wrapper Demo
echo ============================

REM Check if Python is available
python --version >nul 2>&1
if errorlevel 1 (
    echo Error: Python is not available in PATH
    echo Please install Python or add it to your PATH
    pause
    exit /b 1
)

echo Python found:
python --version

REM Check if the GRASS library exists
set GRASS_LIB_PATH=C:\opt\grass\build\output\lib\grass85\etc\python\grass\lib\date.py
if not exist "%GRASS_LIB_PATH%" (
    echo Error: GRASS datetime library not found at:
    echo %GRASS_LIB_PATH%
    echo.
    echo Please make sure GRASS is built successfully and the library exists.
    echo You may need to run your ctypesgen command first:
    echo.
    echo python C:/opt/grass/python/libgrass_interface_generator/run.py ^
    echo     --cpp "C:/Program Files/Microsoft Visual Studio/2022/Community/VC/Tools/MSVC/14.44.35207/bin/Hostx64/x64/cl.exe -E /D_CRT_SECURE_NO_WARNINGS /DNOMINMAX /DGRASS_CMAKE_BUILD=1 /DWIN32 /D_WINDOWS" ^
    echo     --no-embed-preamble ^
    echo     --compile-libdir "C:\opt\grass\build\output\lib\grass85\lib" ^
    echo     --strip-build-path "C:/opt/grass/build/output/lib/grass85" ^
    echo     -I"C:/Program Files (x86)/GRASS/include" ^
    echo     -I"C:/opt/grass/build/output/lib/grass85/include" ^
    echo     -lgrass_datetime ^
    echo     -o "C:/opt/grass/build/output/lib/grass85/etc/python/grass/lib/date.py" ^
    echo     "C:/opt/grass/build/output/lib/grass85/include/grass/datetime.h" ^
    echo     "C:/opt/grass/build/output/lib/grass85/include/grass/defs/datetime.h"
    echo.
    pause
    exit /b 1
)

echo GRASS library found: %GRASS_LIB_PATH%
echo.

REM Set environment variables
set GRASS_PYTHON_LIB=C:\opt\grass\build\output\lib\grass85\etc\python
set GRASS_LIB_DIR=C:\opt\grass\build\output\lib\grass85\lib

echo Environment:
echo   GRASS_PYTHON_LIB=%GRASS_PYTHON_LIB%
echo   GRASS_LIB_DIR=%GRASS_LIB_DIR%
echo.

REM Run the simple demo first
echo Running Simple DateTime Demo...
echo ===============================
python simple_datetime_demo.py
set SIMPLE_RESULT=%ERRORLEVEL%

echo.
echo ===============================
echo Simple demo result: %SIMPLE_RESULT%

if %SIMPLE_RESULT% equ 0 (
    echo Simple demo passed! Running comprehensive demo...
    echo.
    echo Running Comprehensive DateTime Demo...
    echo ======================================
    python test_grass_datetime_demo.py
    set COMPREHENSIVE_RESULT=%ERRORLEVEL%

    echo.
    echo ======================================
    echo Comprehensive demo result: %COMPREHENSIVE_RESULT%
) else (
    echo Simple demo failed. Skipping comprehensive demo.
    set COMPREHENSIVE_RESULT=1
)

echo.
echo ===============================
echo DEMO SUMMARY
echo ===============================
if %SIMPLE_RESULT% equ 0 (
    echo ✓ Simple demo: PASSED
) else (
    echo ✗ Simple demo: FAILED
)

if %COMPREHENSIVE_RESULT% equ 0 (
    echo ✓ Comprehensive demo: PASSED
) else (
    echo ✗ Comprehensive demo: FAILED
)

echo.
if %SIMPLE_RESULT% equ 0 if %COMPREHENSIVE_RESULT% equ 0 (
    echo 🎉 ALL DEMOS PASSED! Your GRASS datetime wrapper is working correctly.
) else (
    echo ⚠️  Some demos failed. Check the output above for details.
)

echo.
echo Press any key to exit...
pause >nul

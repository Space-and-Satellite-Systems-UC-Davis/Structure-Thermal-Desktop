@echo off
echo Running %0...
SETLOCAL
SET /A tasks = 0
SET /A failures = 0
set path=C:\Program Files\Cullimore and Ring\Shared64;%PATH%
set path=C:\Program Files\Cullimore and Ring\Thermal Desktop;%PATH%
chdir "C:\Users\rpkar\Documents\Working CubeSat Model\"

echo Running task '"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "EXTERNAL_HR-Hot_Case-rcoptics_open_v1.3 (2).rch" 1 Y 0'...
SET /A tasks = %tasks% + 1
"C:\Program Files\Cullimore and Ring\Thermal Desktop\radcad_cl64.exe" "EXTERNAL_HR-Hot_Case-rcoptics_open_v1.3 (2).rch" 1 Y 0
if %errorlevel% == 0 (
    echo   Success
) else (
    SET /A failures = %failures% + 1
    echo   Failure
)

echo Ran %tasks% task(s) with %failures% failure(s). Exit code is number of failures.
exit /b %failures%
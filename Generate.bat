cd %~dp0
set PYTHONDONTWRITEBYTECODE=1
scons platform=windows target=editor arch=x86_64 debug_symbols=true optimize=size target_win_version=0x0A00 vsproj=yes -j24
pause
cd %~dp0
set PYTHONDONTWRITEBYTECODE=1
scons platform=windows target=editor arch=x86_64 debug_symbols=yes optimize=size -j24 vsproj=yes
pause
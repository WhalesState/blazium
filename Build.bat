cd %~dp0
set PYTHONDONTWRITEBYTECODE=1
scons platform=windows target=editor arch=x86_64 debug_symbols=false optimize=size -j24
ren "%~dp0\bin\godot.windows.editor.x86_64.exe" "Lithium.IDE.Windows.x64.exe"
ren "%~dp0\bin\godot.windows.editor.x86_64.console.exe" "Lithium.IDE.Windows.x64.Console.exe"
pause
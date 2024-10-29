cd %~dp0
set PYTHONDONTWRITEBYTECODE=1
scons platform=windows target=editor arch=x86_64 debug_symbols=true -j24
ren "%~dp0\bin\godot.windows.editor.x86_64.exe" "Godot 4.3 Editor x64.exe"
ren "%~dp0\bin\godot.windows.editor.x86_64.console.exe" "Godot 4.3 Editor x64 Console.exe"
pause
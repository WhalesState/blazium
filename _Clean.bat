cd %~dp0
set PYTHONDONTWRITEBYTECODE=1
scons --clean
del "vc140.pdb"
rmdir /s /q ".vs"
rmdir /s /q "bin"
rmdir /s /q "obj"
rmdir /s /q ".sconf_temp"
pause
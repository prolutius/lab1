git submodule init
git submodule update

"D:\cmake\bin\cmake.exe" ^
  -H. ^
  -Boutput_64 ^
  -G"Visual Studio 16 2019" ^
  %*
pause
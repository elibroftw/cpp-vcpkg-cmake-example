# C++ Vcpkg Cmake Example
A C++ sample project that is platform and IDE agnostic made possible by using vcpkg and cmake.

# Building
These steps assume you have correctly installed `vcpkg` and `cmake`.
1. Clone the repository and make it the current working directory
2. Open project in Visual Studio 2022 or Visual Studio Code
3. Make sure `vcpkg` and `cmake` are installed and are in `PATH` and make sure the environment variable `VCPKG_DEFAULT_TRIPLET` is set
4. Run `vcpkg "@./vcpkg_rf.txt"`
5. Configure Visual Studio \[Code] to use your `vcpkg.cmake` as the Cmaketoolchain
6. Click Build in Visual Studio or `Build: Target` in the command palette of Visual Studio Code

Tweak any step if it isn't on point.

# Installing and Setting up Vcpkg (Video)
<a href=https://youtu.be/FeBzSYiWkEU>
  <img width=75% src="https://img.youtube.com/vi/FeBzSYiWkEU/maxresdefault.jpg" alt="Installing Libraries in C++ via CMake and Vcpkg" align="center"/>
</a>

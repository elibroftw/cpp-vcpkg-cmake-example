# C++ Vcpkg Cmake Example
A C++ sample project that is platform and IDE agnostic made possible by using vcpkg and cmake.

# Building
1. Clone the repository and make it the current working directory
2. Open project in Visual Studio 2022 or Visual Studio Code
3. Make sure `vcpkg` and `cmake` are installed and are in `PATH` and make sure the environment variable `VCPKG_DEFAULT_TRIPLET` is set
4. Run `vcpkg "@./vcpkg_rf.txt"`
5. Configure Visual Studio \[Code] to use your `vcpkg.cmake` as the Cmaketoolchain
6. Click Build in Visual Studio or `Build: Target` in the command palette of Visual Studio Code

Tweak any step if it isn't on point.

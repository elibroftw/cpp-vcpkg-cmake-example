# C++ Vcpkg CMake Example

A C++ sample project that is platform and IDE agnostic made possible by using Vcpkg and CMake.

## Building and Development

### Prerequisites

- Requires `vcpkg` installed (and on PATH)
- Requires `VCPKG_ROOT` and `VCPKG_DEFAULT_TRIPLET` to be defined in environment variables
- Requires `cmake` 3.21+ installed (and on PATH)
- IDE: Visual Studio 2022 or Visual Studio Code

### Building

1. Clone the repository and make it the current working directory
2. Run `vcpkg "@./vcpkg_rf.txt"`
3. Click Build in Visual Studio or `Build: Target` in the command palette of Visual Studio Code

Tweak any step if it isn't on point.

## Tutorials

### [Blog Post] Installing Libraries for C++ with Vcpkg and CMake

[https://blog.elijahlopez.ca/posts/vcpkg-cmake-tutorial/](https://blog.elijahlopez.ca/posts/vcpkg-cmake-tutorial/)

### [Youtube Video] Installing and Setting up Vcpkg

<a href=https://youtu.be/FeBzSYiWkEU>
  <p align="center">
    <img width=75% src="https://img.youtube.com/vi/FeBzSYiWkEU/maxresdefault.jpg" alt="Installing Libraries in C++ via CMake and Vcpkg"/>
  </p>
</a>

## Trouble Shooting

Delete CMake cache and reconfigure

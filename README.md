# SFML/Box2D Template
This CLion template project provides a starting point for C++ developers who plan to use both SFML and Box2D.
In order for CMake to find SFML and Box2D, you must have both libraries installed.
The instructions below are designed for Windows users.

### Installing SFML
Download the latest version of SFML from the website (https://www.sfml-dev.org/download.php).
Extract the SFML-2.5.1 folder (or whatever version you downloaded) into your computer's Program Files directory.
Rename the extracted folder to just "SFML" (without the version number).

### Installing Box2D
The simplest way I have found is to follow the instructions in the Box2D ReadMe for installing with CMake (https://github.com/erincatto/box2d#installing-using-cmake).

**NOTE:** If you are using the 32-bit version of SFML, be sure to add "-A Win32" to the "cmake -DBOX2D_BUILD_DOCS=ON .." command.

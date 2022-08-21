# Google Test CMake Template Project
This project replicates the instructions provided in the GoogleTest quickstart quide for CMake: https://google.github.io/googletest/quickstart-cmake.html.

Invoke the available test(s) using the following commands:
```
cd my_project
cmake -S . -B build
cmake --build build
cd build && ctest 
```
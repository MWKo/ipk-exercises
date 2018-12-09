# Set minimum required CMake version
cmake_minimum_required(VERSION 3.5)

# Start project and set its name to canvas
project(canvas LANGUAGES CXX)

# Force compiler to run in C++14 mode
set(CMAKE_CXX_STANDARD 14)

add_executable(plot plot.cc pgm.cc point.cc canvas.cc)

enable_testing()

add_executable(testcorners testcorners.cc pgm.cc point.cc canvas.cc)
add_test(TestCorners testcorners)
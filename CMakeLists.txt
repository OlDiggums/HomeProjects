cmake_minimum_required(VERSION 3.21)
project(Primitive_Raymarching)

#message("Hi")
set(OpenCV_DIR "Z:/opencv/build")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")
find_package(OpenCV REQUIRED COMPONENTS core imgproc highgui)
include_directories(${OpenCV_INCLUDE_DIRS}) # Not needed for CMake >= 2.8.11
set(CMAKE_CXX_STANDARD 11)
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)
add_executable(Primitive_Raymarching main.cpp Sphere.cpp Sphere.h Vector3.cpp Vector3.h Camera.cpp Camera.h)

target_link_libraries(Primitive_Raymarching ${OpenCV_LIBS})
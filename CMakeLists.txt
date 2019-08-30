cmake_minimum_required(VERSION 3.8)

project(Pixleon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")

add_definitions( -DROOT_DIR="${CMAKE_SOURCE_DIR}")

find_package(glfw3 3.3 REQUIRED)
find_package(OpenGL REQUIRED)
find_package(Vulkan REQUIRED)

 add_subdirectory(mainSrc)
 add_subdirectory(pixPipeline)
 add_subdirectory(pixLib)
 

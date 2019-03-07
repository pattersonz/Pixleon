cmake_minimum_required(VERSION 3.8)

project(Pixleon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/Modules/")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")


add_subdirectory(${CMAKE_SOURCE_DIR}/glfw321)

include_directories(${CMAKE_SOURCE_DIR}/glfw321/include)
message(STATUS "${GLFW_LIBRARIES}")
set(GLFW_STATIC_LIBRARIES "${GLFW_LIBRARIES}")

FIND_PACKAGE(VULKAN REQUIRED)

IF (NOT Vulkan_FOUND)
	message(FATAL_ERROR "Could not find Vulkan library!")
ELSE()
	message(STATUS ${Vulkan_LIBRARY})
ENDIF()
 
 
 add_subdirectory(mainSrc)
 add_subdirectory(pixPipeline)
 add_subdirectory(pixLib)
 
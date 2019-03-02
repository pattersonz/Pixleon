cmake_minimum_required(VERSION 3.12)

project(Pixleon)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH}"${CMAKE_SOURCE_DIR}/cmake/Modules/")

FIND_PACKAGE(VULKAN REQUIRED)

IF (NOT Vulkan_FOUND)
	message(FATAL_ERROR "Could not find Vulkan library!")
ELSE()
	message(STATUS ${Vulkan_LIBRARY})
ENDIF()
 
 
 add_subdirectory(mainSrc)
 add_subdirectory(pixPipeline)
 add_subdirectory(pixLib)
 

include_directories(${CMAKE_SOURCE_DIR})
include_directories(${OPENCL_INCLUDE_DIR})

add_library(pixLib 
Sprite.cpp)

 target_link_libraries(pixLib OpenCL::OpenCL)
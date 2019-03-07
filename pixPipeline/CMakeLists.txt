include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/pixLib)
include_directories(${VULKAN_INCLUDE_DIR})

add_library(pixPipeline 
	Pipe.cpp Pipe.h
)

target_link_libraries(pixPipeline pixLib)
 target_link_libraries(pixPipeline ${Vulkan_LIBRARIES})
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/pixLib)

add_library(pixPipeline 
)

target_link_libraries(pixPipeline pixLib)
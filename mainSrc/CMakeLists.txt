 include_directories(${CMAKE_SOURCE_DIR})
 include_directories(${CMAKE_SOURCE_DIR}/pixPipeline)
 include_directories(${CMAKE_SOURCE_DIR}/pixLib)
 
 add_executable(pixleon
		main.cpp)
		
 target_link_libraries(pixleon pixPipeline)
 target_link_libraries(pixleon pixLib)
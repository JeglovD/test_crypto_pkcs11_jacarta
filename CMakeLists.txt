cmake_minimum_required(VERSION 3.5.2)
project( jacarta )
add_executable( 
    ${PROJECT_NAME}
    implementation/main.cpp
    implementation/library.cpp
)
if (${CMAKE_GENERATOR} MATCHES Win64)
    add_definitions("-DBUILD_WIN64")
else()
    add_definitions("-DBUILD_WIN32")
endif()

target_link_libraries(${PROJECT_NAME} dl)

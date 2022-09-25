cmake_minimum_required(VERSION 3.24.2)

project(cxx-template)
set(TARGET_NAME "cxx-template")
set (CMAKE_CXX_STANDARD 17)

add_subdirectory("ExampleClass")
add_subdirectory("tests")

add_executable(${TARGET_NAME} "main.cpp")


target_link_libraries(${TARGET_NAME}
    PUBLIC
        ExampleClass
)
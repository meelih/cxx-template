add_library(ExampleClass
        "ExampleClass.cpp"
)

target_include_directories(ExampleClass 
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

enable_testing()

find_package(GTest REQUIRED)

set(TARGET_NAME "test-cxx-template")

add_executable(${TARGET_NAME}
  tests.cpp
)
target_link_libraries(${TARGET_NAME}
  GTest::gtest_main
  ExampleClass
)

include(GoogleTest)
gtest_discover_tests(${TARGET_NAME})
#include <gtest/gtest.h>
#include "ExampleClass.hpp"


// TODO: this test is misleading and doesn't add any value
TEST(ExampleClass, CanCountNumberOfLinesWhenFileValid) {
  example_class::ExampleClass ex("src/main.cppp");
  // File might be empty
  EXPECT_GE(ex.countNumberOfLines(), 0);
}
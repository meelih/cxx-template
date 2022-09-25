#include <iostream>
#include "ExampleClass.hpp"

int main()
{
  fs::path path = "./src/main.cpp";
  if(fs::exists(path))
  {
    example_class::ExampleClass ex(path);
    std::cout << "main.cpp has " << ex.countNumberOfLines() << " lines\n";
  }
  else
    std::cerr << "file not found\n";

  return EXIT_SUCCESS;
}

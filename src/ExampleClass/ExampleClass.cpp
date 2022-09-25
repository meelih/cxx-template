
#include "ExampleClass.hpp"
#include <iostream>


namespace example_class
{

ExampleClass::ExampleClass(fs::path pathToFile): file{pathToFile} { }

//TODO: Parse errors might crash, check back here
uint32_t ExampleClass::countNumberOfLines()
{
    std::string line;
    uint32_t numberOfLines;

    while(getline(file, line))
    {
        numberOfLines++;
    }
    return numberOfLines;
}

ExampleClass::~ExampleClass()
{
    file.close();
}

}
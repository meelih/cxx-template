#pragma once
#include <filesystem>
#include <fstream>

namespace fs = std::filesystem;
namespace example_class
{

class ExampleClass
{
	public:
		ExampleClass(fs::path);
		~ExampleClass();
		uint32_t countNumberOfLines();
	
	private:
		std::ifstream file;
};
}

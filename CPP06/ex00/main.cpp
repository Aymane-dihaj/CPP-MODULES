#include "ScalarConverter.hpp"


int main(int argc, char **argv)
{
	try
	{
		if (argc == 2)
		{
			std::string str = argv[1];
			ScalarConverter::convert(str);
		}
		else
			throw std::runtime_error("Invalid args count!");
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
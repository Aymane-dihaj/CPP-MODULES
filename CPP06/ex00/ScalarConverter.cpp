#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::~ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& other){(void)other;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other){(void)other; return (*this);}

void printChar(double c)
{
    if (c < 33 || c > 126)
    {
        std::cout << "char: Non displayable" << std::endl;
        return ;
    }
    else if (c >= 33 && c <= 126)
        std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
    else
        std::cout << "char: impossible" << std::endl;
}

void    printInt(double c)
{
    if (std::isnan(c) || c > INT_MAX || c < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(c) << std::endl;
}

void printFloat(double c)
{
    if (c - static_cast<int>(c) > 0 || c - static_cast<int>(c) < 0)
        std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
    else
        std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
}

void printDouble(double c)
{
        std::cout << "double: " << c << std::endl;
}


void ScalarConverter::convert(std::string& str)
{
    char *leftOver;
    double result;

    result = std::strtod(str.c_str(), &leftOver);

    if (*leftOver && strlen(leftOver) != 1)
        throw "Error";
    if (result == 0 && strlen(leftOver) == 1)
    {
        std::cout << "char: '" << leftOver << "'" << std::endl;
        std::cout << "int: " << static_cast<int>(leftOver[0]) << std::endl;
        std::cout << "float: " << static_cast<float>(leftOver[0]) << "f" << std::endl;
        std::cout << "double: " << static_cast<double>(leftOver[0]) << std::endl;
    }
    else 
    {
        printChar(result);
        printInt(result);
        printFloat(result);
        printDouble(result);
    }
}
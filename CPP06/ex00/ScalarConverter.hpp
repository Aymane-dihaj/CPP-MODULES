#ifndef CONVERT_HPP
#define CONVERT_HPP


#include <iostream>
#include <string.h>
#include <cmath>
#include <cstdlib>
#include <cfloat>
#include <limits.h>
#include <iomanip>

class ScalarConverter
{
    private:
        ScalarConverter();
        ~ScalarConverter();
    public:
        ScalarConverter(const ScalarConverter& other);
        ScalarConverter& operator=(const ScalarConverter& other);
        static void convert(std::string& str);
};

#endif
#include "BitcoinExchange.hpp"
#include <string>


std::string getValue(std::string& line);
{
    if ()
}

int is_all_digit(std::string str)
{
    const char *c_style = str.c_str();
    unsigned int len = str.length();
    for (unsigned int i = 0; i < len; i++)
        if (!isdigit(c_style[i]))
            return 1;
    return 0;
}



void keyChecker(std::string key)
{
    if (key.empty() || key.length() != 10 || countElement(key, '-') != 2)
        throw std::runtime_error("Error: invalid date format.");
   std::string year = key.substr(0, key.find('-'));
   std::string month = key.substr(5, 2);
   std::string day = key.substr(8, 2);
   if (year.length() != 4 || is_all_digit(year) || is_all_digit(month) || is_all_digit(day))
        throw std::runtime_error("Error: Wrong date format.");
    std::cout << key << std::endl;
}

std::string getKey(std::string& line)
{
    std::string key;

    key = line.substr(0, line.find('|') - 1);
    // keyChecker(key);
    return key;
}

void checkDateValue(std::string &line)
{
    if (line.empty() || line.find("date", 0) == std::string::npos || line.find("value", 7) == std::string::npos || countElement(line, ' ') != 2
        || line.find("|") == std::string::npos)
        throw std::runtime_error("Error: invalid input.");
}

void    exchange(std::string& inputFile)
{
    if (inputFile.empty())
        throw std::runtime_error("Error: invalid input file.");
    std::ifstream inputObj(inputFile.c_str());
    if (!inputObj.is_open() || inputObj.fail())
        throw std::runtime_error("Error: could not open the file.");
    std::string line;
    std::getline(inputObj, line);
    checkDateValue(line);
    while (std::getline(inputObj, line))
    {
        std::string key = getKey(line);
        std::cout << "[" << getKey(line) << "]" << std::endl;
        database.insert(std::make_pair(getKey(line), getValue(line)));
    }
}
int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Error: Wrong number arguments\n";
        return 1;
    }
    try
    {
        std::string inputFile = av[1];
        exchange(inputFile);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
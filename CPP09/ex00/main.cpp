#include "BitcoinExchange.hpp"


// std::string getValue(std::string& line);
int countSpaces(std::string &str)
{
    int count = 0;
    for (int i = 0; i < str.length(); i++)
        if (str.at(i) == ' ')
            count++;
    return count;
}

std::string getKey(std::string& line)
{
    std::string key;

    key = line.substr(0, line.find('|') - 1);
    if (key.empty())
        throw std::runtime_error("Error: invalid input.");
    return key;
}

void checkDateValue(std::string &line)
{
    if (line.empty() || line.find("date", 0) == -1 || line.find("value", 7) == -1 || countSpaces(line) != 2
        || line.find("|") == -1)
        throw std::runtime_error("Error: invalid input.");
    
}

void    exchange(std::string& inputFile)
{
    if (inputFile.empty())
        throw std::runtime_error("Error: invalid input file.");
    std::ifstream inputObj(inputFile);
    if (!inputObj.is_open() || inputObj.fail())
        throw std::runtime_error("Error: cannot open the file.");
    std::string line;
    std::getline(inputObj, line);
    checkDateValue(line);
    while (std::getline(inputObj, line))
    {
        std::cout << "[" << getKey(line) << "]" << std::endl;
        // database.insert(std::make_pair(getKey(line), getValue(line)))
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
#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::~BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    *this = other;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        this->database = other.database;
    }
    return *this;
}

int BitcoinExchange::keyChecker(std::string &date)
{
    int year, month, day;
    char dash1, dash2;

    std::istringstream ss(date);

    ss >> year >> dash1 >> month >> dash2 >> day;

    if (ss.fail() || dash1 != '-' || dash2 != '-')
        return 1;
    if ((year <= 2009 && month <= 1 && day < 2) || (year < 0 || year > 2023) || (month < 1 || month > 12) || (day < 1 || day > 31))
        return 1;
    return 0;
}

double BitcoinExchange::valueChecker(std::string &_value)
{
    char *tmp;
    double value = 0;


    value = strtod(_value.c_str(), &tmp);
    if (*tmp)
        throw std::runtime_error("Error: bad input => " + _value);
    if (value > 1000)
        throw std::runtime_error("Error: too large number.");
    if (value < 0)
        throw std::runtime_error("Error: not a positive number.");
    return value;
}
int countElement(std::string &str, int c)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
        if (str.at(i) == c)
            count++;
    return count;
}

void BitcoinExchange::parseLine(std::string &line)
{
    std::string date;
    char pipe;
    std::string val;
    double value = 0;

    std::istringstream ss(line);

    ss >> date >> pipe >> val;
    if (ss.fail() || pipe != '|' || keyChecker(date))
        throw std::runtime_error("Error: bad input => " + date);
    if (line.length() < 14)
        throw std::runtime_error("Error: bad input.");
    value = valueChecker(val);
    this->date = date;
    this->value = value;
}


void checkDateValue(std::string &line)
{
    if (line.empty() || line.find("date", 0) == std::string::npos || line.find("value", 7) == std::string::npos || countElement(line, ' ') != 2
        || line.find("|") == std::string::npos)
        throw std::runtime_error("Error: invalid input File format.");
}

void BitcoinExchange::initDatabaseFromCsv(std::string &pathToDatabase)
{
    std::ifstream dataFile(pathToDatabase);
    std::string titleBuffer;
    std::string line;

    if (!dataFile.is_open() || dataFile.fail())
        throw std::runtime_error("Error: cannot open the data.csv file.");
    std::getline(dataFile, titleBuffer);
    if (titleBuffer.empty())
        throw std::runtime_error("Error: invalid csv database.");
    while (std::getline(dataFile, line))
    {
        char* tmp;
        int commaIndex = line.find(',');
        std::string _date = line.substr(0, commaIndex);
        double exchangeRate =  strtod(line.substr(commaIndex + 1, line.length() - commaIndex).c_str(), &tmp);
        this->database[_date] = exchangeRate;
    }
}

void    BitcoinExchange::calculateExchangeRate(void)
{
    double valueFromDatabase = 0;
    double result = 0;

    std::map<std::string, double>::iterator iter;

    iter = database.upper_bound(this->date);
    if (iter != database.begin())
        iter--;
    valueFromDatabase = iter->second;
    result = this->value * valueFromDatabase;
    std::cout << this->date << " => " << this->value << " = " << result << std::endl;
}

void    BitcoinExchange::exchange(std::string& inputFile)
{
    std::string pathToDatabase = "data.csv";

    if (inputFile.empty())
        throw std::runtime_error("Error: invalid input file.");
    std::ifstream inputObj(inputFile.c_str());
    if (!inputObj.is_open() || inputObj.fail())
        throw std::runtime_error("Error: could not open the file.");
    std::string line;
    std::getline(inputObj, line);
    checkDateValue(line);
    initDatabaseFromCsv(pathToDatabase);
    while (std::getline(inputObj, line))
    {
        try
        {
            if (line.empty())
                throw std::runtime_error("Error: empty input.");
            parseLine(line);
            // std::cout << "[" << this->date << " | "  << this->value << "]" << std::endl;
            this->calculateExchangeRate();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}
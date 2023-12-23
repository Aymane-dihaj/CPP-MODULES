#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <map>
#include <ctime>
#include <cstring>
#include <algorithm>
#include <cctype>
#include <iomanip>







class BitcoinExchange
{
    private:
        std::map<std::string, double> database;
        std::string date;
        double value;
    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);

        void exchange(std::string &inputFile);
        void initDatabaseFromCsv(std::string &pathToDatabase);

        void parseLine(std::string &line);
        int keyChecker(std::string &date);
        double valueChecker(std::string &_value);
        void calculateExchangeRate(void);

        //iterator
        // std::map<std::string, double>::iterator Iterator;
};
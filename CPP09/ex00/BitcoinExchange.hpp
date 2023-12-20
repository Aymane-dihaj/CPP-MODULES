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



typedef struct date
{
    unsigned int day;
    unsigned int year;
    unsigned int month;
} date;

int countElement(std::string &str, int c)
{
    int count = 0;
    for (size_t i = 0; i < str.length(); i++)
        if (str.at(i) == c)
            count++;
    return count;
}

std::map<date, float> database;


void    exchange(std::string& inputFile);
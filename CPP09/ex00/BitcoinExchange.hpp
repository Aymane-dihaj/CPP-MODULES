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


std::map<date, float> database;


void    exchange(std::string& inputFile);
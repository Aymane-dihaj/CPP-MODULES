#pragma once

#include <iostream>
#include <time.h>
#include <string>
#include <deque>
#include <vector>
#include <ctime>

void fillContainers(std::vector<int>& vec, std::deque<int>& deq, char **av, int ac);
void checkInput(int ac, char **av);
int isNum(char *str);
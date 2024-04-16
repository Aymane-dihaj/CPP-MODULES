#include "PmergeMe.hpp"


void fillContainers(std::vector<int>& vec, std::deque<int>& deq, char **av, int ac)
{   
    int num = 0;
    for (int i = 1; i < ac; i++)
    {
        num = atoi(av[i]);
        vec.push_back(num);
        deq.push_back(num);
    }
    size_t i = 0;
while (i + 1 < vec.size() && vec[i] < vec[i + 1])
        i++;
    if (i + 1 == vec.size())
        throw std::runtime_error("Error: numbers already sorted.");
}


int isNum(char *str)
{
    for (size_t i = 0; str[i]; i++)
    {
        if (str[i] == '+' && i == 0)
            i++;
        if (!isdigit(str[i]))
            return 1;
    }
    return 0;
}

void checkInput(int ac, char **av)
{
    for (int i = 1; i < ac; i++)
    {
        if (isNum(av[i]))
            throw std::runtime_error("Error: bad arguments.");
    }
}
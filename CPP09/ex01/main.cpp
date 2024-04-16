#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Error: Wrong number of arguments\n";
        return 1;
    }
    RPN rpn;
    std::string input = av[1];
    if (input.empty())
    {
        std::cerr << "Error!\n";
        return 1;
    }
    rpn.calculator(input);
    return 0;
}
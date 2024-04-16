#include "BitcoinExchange.hpp"
#include <string>
#include <limits>


int main(int ac, char **av)
{

    if (ac != 2)
    {
        std::cout << "Error: Wrong number arguments\n";
        return 1;
    }
    std::string inputFile = av[1];
    try
    {
        BitcoinExchange bitcoinExchange;
        bitcoinExchange.exchange(inputFile);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}
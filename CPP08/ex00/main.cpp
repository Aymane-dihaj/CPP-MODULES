#include "easyfind.hpp"


int main()
{
    std::vector<int> vec;

    vec.push_back(3);
    vec.push_back(2);
    vec.push_back(6);
    vec.push_back(7);
    vec.push_back(1);
    vec.push_back(9);

    int result = easyfind(vec, 2);
    if (result == -1)
        std::cout << "can't find the element\n";
    else
        std::cout << "find in: " << result << std::endl;
    return 0;    
}
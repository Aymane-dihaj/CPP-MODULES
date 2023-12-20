#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int easyfind(T &container, int arg)
{
    typename T::iterator iter;

    iter = std::find(container.begin(), container.end(), arg);
    if (iter == container.end())
        return -1;
    return (iter - container.begin());
}



#endif
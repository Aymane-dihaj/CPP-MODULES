#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename W>
void iter(T *arr, unsigned int lenght, void (*func)(W& param))
{
    for (int i = 0; i < lenght; i++)
        func(arr[i]);
}


template <typename F>
void funcTest(F &element)
{
    std::cout << element << std::endl;
}



#endif
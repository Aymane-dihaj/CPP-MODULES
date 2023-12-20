#ifndef SPAN_HPP
#define SPAN_HPP


#include <vector>
#include <iostream>
#include <algorithm>


class Span
{
    private:
        unsigned int N;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span& other);
        Span& operator=(const Span& other);
        ~Span();

        //methods
            void    addNumber(int number);
            void    addNumbers(const std::vector<int>& Numbers);
            int     shortestSpan(void) const;
            int     longestSpan(void) const;

        // getter
            unsigned int getN(void) const;
};


#endif
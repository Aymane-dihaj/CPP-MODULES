#include "Span.hpp"


int main()
{

    try
    {
        Span span(50);

        span.addNumber(3);
        span.addNumber(7);

        std::vector<int> vec;

        vec.push_back(1);
        vec.push_back(5);
        vec.push_back(2);
        vec.push_back(8);
        vec.push_back(9);
        vec.push_back(88);
        vec.push_back(22);

        // add a container of numbers at once
        span.addNumbers(vec);

        int shortest = span.shortestSpan();
        int longest = span.longestSpan();

        std::cout << "shortest span: " << shortest << '\n' << "longest span: " << longest << std::endl;
        
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() ;
    }
}
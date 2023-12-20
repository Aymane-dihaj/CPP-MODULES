#include "Span.hpp"


Span::Span(unsigned int n)
{
    this->N = n;
}

Span::Span()
{
    this->N = 0;
}

Span::~Span(){}

Span::Span(const Span& other)
{
    *this = other;
}

unsigned Span::getN(void) const
{
    return this->N;
}

Span& Span::operator=(const Span& other)
{
    if (this == &other)
        return *this;
    this->N = other.getN();
    return *this;
}

void Span::addNumber(int number)
{
    if (this->vec.size() >= this->getN())
        throw std::out_of_range("Out of range : the capacity is full.\n");
    this->vec.push_back(number);
}

void Span::addNumbers(const std::vector<int>& Numbers)
{
    if (vec.size() + Numbers.size() >= this->N)
        throw std::out_of_range("Out of range : the capacity is full\n");
    vec.insert(vec.end(), Numbers.begin(), Numbers.end());
}


int Span::longestSpan() const
{
    if (this->vec.size() < 2)
        throw std::runtime_error("the container do not have enough elements to find the longest Span\n");
    
    int max = *std::max_element(vec.begin(), vec.end());
    int min = *std::min_element(vec.begin(), vec.end());

    int longest = max - min;
    return (longest);
}

int Span::shortestSpan() const
{
    if (vec.size() < 2)
        throw std::runtime_error("the container do not have enough elements to find the shortest Span\n");
    std::vector<int> sortedVec;
    sortedVec = this->vec;
    std::sort(sortedVec.begin(), sortedVec.end());
    int shortest = sortedVec[1] - sortedVec[0];
    for(unsigned int i = 2; i < sortedVec.size(); i++)
        shortest = std::min(shortest, sortedVec[i] - sortedVec[i - 1]);
    return shortest;
}
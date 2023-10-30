#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::~Brain()
{
    std::cout << "Brain constructor called\n";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called\n";
    *this = other;
}

Brain&  Brain::operator=(const Brain& other)
{
    std::cout << "Brain copy assignment operator called\n";
    if (this == &other)
        return *this;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}
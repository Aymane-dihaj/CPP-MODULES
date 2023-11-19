#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created\n";
}

Brain::~Brain()
{
    std::cout << "Brain destroyed\n";
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor called\n";
    *this = other;
}

Brain &Brain::operator=(const Brain &other) {
    std::cout << "Brain assigned" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

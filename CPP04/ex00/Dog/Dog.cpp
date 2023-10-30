#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called\n";
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog prametric constructor called\n";
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called\n";
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog bark...\n";
}
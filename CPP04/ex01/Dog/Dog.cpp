#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called\n";
    this->_brain = new Brain;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog prametric constructor called\n";
    this->_brain = new Brain;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called\n";
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called\n";
    delete this->_brain;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog copy assignment operator called\n";
    if (this == &other)
        return *this;
    delete this->_brain;

    Brain *new_brain = new Brain;
    (*new_brain) = *other._brain;

    this->_brain = new_brain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog bark...\n";
}
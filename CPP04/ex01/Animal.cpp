#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called\n";
    this->type = "unkonnu";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal parametrized constructor called\n";
    this->type = type;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assingment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.getType();
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called\n";
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal Copy constructor called\n";
    *this = other;
}

void Animal::makeSound() const
{
    std::cout << "Animal sound called\n";
}
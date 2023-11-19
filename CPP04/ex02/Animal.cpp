#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default Constructor is called" << std::endl;
    this->type = "Unknown";
}

Animal::Animal(std::string type)
{
    std::cout << "Animal parameterized Constructor is called" << std::endl;
    this->type = type;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal Copy Constructor is called" << std::endl;
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor is called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
    std::cout << "Animal Assignment Operator is called" << std::endl;
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

// Getters and Setters
std::string Animal::getType() const {
    return this->type;
}
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called\n";
    this->type = "unkonnu";
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "WrongAnimal parametrized constructor called\n";
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    std::cout << "WrongAnimal assingment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.getType();
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    std::cout << "WrongAnimal Copy constructor called\n";
    *this = other;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound called\n";
}
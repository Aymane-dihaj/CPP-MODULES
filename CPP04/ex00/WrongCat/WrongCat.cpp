# include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called\n";
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
    std::cout << "WrongCat prametric constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called\n";
    *this = other;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called\n";
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    std::cout << "WrongCat copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongCat meow meow...\n";
}
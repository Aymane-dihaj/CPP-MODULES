# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat default constructor called\n";
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat prametric constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called\n";
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat copy assignment operator called\n";
    if (this == &other)
        return *this;
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat meow meow...\n";
}
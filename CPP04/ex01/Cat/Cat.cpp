# include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parameterized constructor called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->_brain;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = other.type;
    delete this->_brain;

    Brain *newBrain = new Brain();
    (*newBrain) = *other._brain;
    
    this->_brain = newBrain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat :meow meow..." << std::endl;
}
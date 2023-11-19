#include "Dog.hpp"


Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << "Dog parametric Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other)
{
    std::cout << "Dog Copy Constructor is called" << std::endl;
    *this = other;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor is called" << std::endl;
    delete this->_brain; 
}

Dog &Dog::operator=(Dog const &obj)
{
    std::cout << "Dog Assignment Operator is called" << std::endl;
    this->type = obj.type;

    delete this->_brain;
    Brain *newBrain = new Brain();
    (*newBrain) = *obj._brain;
    
    this->_brain = newBrain;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Dog makeSound is called" << std::endl;
}
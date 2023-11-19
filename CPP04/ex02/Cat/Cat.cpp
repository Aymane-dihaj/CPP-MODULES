# include "Cat.hpp"


Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat parametric Constructor is called" << std::endl;
    this->_brain = new Brain();
}

Cat::Cat(const Cat &other) : Animal(other)
{
    std::cout << "Cat Copy Constructor is called" << std::endl;
    *this = other;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor is called" << std::endl;
    delete this->_brain; 
}

Cat &Cat::operator=(Cat const &obj)
{
    std::cout << "Cat Assignment Operator is called" << std::endl;
    this->type = obj.type;

    delete this->_brain;
    Brain *newBrain = new Brain();
    (*newBrain) = *obj._brain;
    
    this->_brain = newBrain;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Cat makeSound is called" << std::endl;
}
#include "Ice.hpp"

Ice::Ice() : type("ice")
{
    std::cout << this->type << " called constructor\n";
}

Ice::~Ice()
{
    std::cout << this->type << " called destructor\n";
}

Ice::Ice(const Ice& other)
{
    this->type = other.getType();
    std::cout << this->type << " called copy constructor\n";
}

Ice& Ice::operator=(const Ice& other)
{
    std::cout << this->type << " assigned operator called\n";
    if (this == &other)
        return *this;
    this->type = other.getType();
    return *this;
}

std::string const& Ice::getType() const
{
    return this->type;
}

Ice*    Ice::clone() const
{
    Ice *tmp = new Ice;
    return tmp;
}

void Ice::use(ICharacter & target)
{
    std::cout << " shoots an ice bolt at " << target.getName() << std::endl;
}
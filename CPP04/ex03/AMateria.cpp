#include "AMateria.hpp"


AMateria::AMateria()
{
    std::cout << "Abstract materia constructor called\n";
}

AMateria::AMateria(std::string const & type) : type(type)
{
    std::cout << "Abstract materia parametric constructor called\n";
}

AMateria::~AMateria()
{
    std::cout << "Abstract materia destructed\n";
}

AMateria::AMateria(const AMateria& other) : type(other.type)
{
    std::cout << "Abstract materia copy constructor called\n";
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void    AMateria::use(ICharacter & target)
{
    std::cout << "AMateria used on " << target.getName() << std::endl;
}
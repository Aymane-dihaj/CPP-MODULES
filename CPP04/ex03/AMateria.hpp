#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
    protected:
        const std::string type;
    public:
        AMateria();
        virtual ~AMateria();
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual AMateria* clone() const = 0; //pure virtual function
        virtual std::string const & getType() const;
        virtual void use(ICharacter & target);
};


#endif
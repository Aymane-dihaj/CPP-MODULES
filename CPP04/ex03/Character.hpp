#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria *inventory[4];
        const std::string name;
    public:
        Character(std::string name);
        Character(const Character& other);
        ~Character();
        Character& operator=(const Character& other);
        std::string const& getName() const;
        void equip(AMateria *materia);
        void unequip(int index);
        void use(int index, ICharacter & target);
        AMateria* getMateriaFromInventory(int index);
};

#endif
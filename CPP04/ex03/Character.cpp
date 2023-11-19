#include "Character.hpp"

Character::Character(std::string name) : name(name)
{
    std::cout << "the character " << this->name << " was created\n";
    for (int i = 0; i < 4; i++)
        this->inventory[i] = 0;
}

Character::~Character()
{
    for (int i = 0; i < 4;i++)
    {
        if (this->inventory[i] )
            delete this->inventory[i];
    }
    std::cout << "Character " << this->name << " was destroyed\n";
}

Character::Character(const Character& other) : name(other.getName() + "_copy")
{
    for (int i = 0; i < 4;i++)
    {
        if (other.inventory[i]) 
            this->inventory[i] = other.inventory[i]->clone();
    }
    std::cout << "A character named " << this->name << " was created from copy of " << other.getName() << std::endl;

}

std::string const& Character::getName() const{
    return this->name;
}

Character& Character::operator=(const Character& other)
{
    //we can't change the name bcs it's constant
    for (int i = 0; i < 4;i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
        if (other.inventory[i])
            this->inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    int i = 0;

    if (!m)
    {
        std::cout << this->name << " tried to equip nothing!!!\n";
        return ;
    }
    while (this->inventory[i] != 0 && i < 4 && (this->inventory[i]) != m)
        i++;
    if (i >= 4)
    {
        std::cout << "can't equip more than 4 materia\n";
        return ;
    }
    else {
        this->inventory[i] = m;
        std::cout << "the character named " << this->name << " equiped a materia of type " << m->getType() << " in slot " << i << std::endl; 
    }
}

void Character::unequip(int index)
{
    if (index < 0 || index >= 4)
        std::cout << this->name << " tried to uniquip invalid materia at slot " << index << std::endl;
    else if (!(this->inventory[index]))
        std::cout  << this->name << " has nothing equipped at slot " << index << std::endl;
    else
    {
        // AMateria *tmp = (this->inventory)[index];
        std::cout  << this->name << " unequipped " << this->inventory[index]->getType() << " at slot " << index << std::endl;
        this->inventory[index] = 0;   
    }
}

void Character::use(int index, ICharacter& target)
{
    if (index < 0 || index >= 4 || !(this->inventory[index]))
    {
        std::cout << "Nothing found to use at index " << index << std::endl;
        return ;
    }
    std::cout << this->getName();
    (this->inventory[index])->use(target);
}

AMateria *Character::getMateriaFromInventory(int index)
{
    return this->inventory[index];
}
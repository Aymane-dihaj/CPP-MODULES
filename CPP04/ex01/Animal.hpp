#ifndef ANIMAL_HPP
#define ANIMAL_HPP


#include <iostream>
#include "Brain.hpp"

class Animal
{
    protected:
        std::string type;
    
    public: 
        Animal();
        ~Animal();
        Animal(std::string type);
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);

        virtual void makeSound() const;
        std::string getType(void) const;
};

#endif
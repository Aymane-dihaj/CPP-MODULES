#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "../WrongAnimal/WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(std::string type);
        ~WrongCat();
        WrongCat(const WrongCat& other);
        WrongCat& operator=(const WrongCat& other);
        
        void makeSound() const;
    
};

#endif
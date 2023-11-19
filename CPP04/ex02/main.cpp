#include "Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"
#include "Brain.hpp"



int main()
{
    std::cout << "\n***********************************************\n\n";
    Animal *j = new Dog();
    Animal *i = new Cat();

    
    *j = *i;


    delete j; // should not create a leak
    delete i;
    std::cout << "\n***********************************************\n\n";

    return 0;
}
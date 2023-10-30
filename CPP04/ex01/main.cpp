#include "Animal.hpp"
#include "Dog/Dog.hpp"
#include "Cat/Cat.hpp"
#include "Brain.hpp"


void test()
{
        const Animal* j = new Dog();
    const Animal* i = new Cat();


    delete j;//should not create a leak
    delete i;
}

int main()
{

    test();
    system("leaks Animal");

    return 0;
}
# include "Dog/Dog.hpp"
# include "Cat/Cat.hpp"
# include "WrongAnimal/WrongAnimal.hpp"
# include "WrongCat/WrongCat.hpp"



int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    const Animal* j = new Dog();
    const WrongAnimal* i = new WrongCat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    return 0;
}
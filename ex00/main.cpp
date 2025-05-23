#include "animal.hpp"
#include "WrongAnimal.cpp"
#include "WrongCat.cpp"

int main()
{
    const WrongAnimal* meta = new WrongAnimal();
    // const WrongAnimal* j = new Dog();
    const WrongAnimal* i = new WrongCat();
     std::cout << meta->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the wrongcat sound!
    meta->makeSound();
    return 0;
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound();
//     meta->makeSound();
//     return 0;
// }

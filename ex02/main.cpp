#include "animal.hpp"
#include "Brain.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AAnimal.hpp"

// int main()
// {
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();

//     delete j;//should not create a leak
//     delete i;

//     return 0;
// }

int main()
{
    Animal *tab[20];
    int i = 0;

    while (i++ < 20)
    {
        if(i < 10)
            tab[i] = new Cat();
        else
            tab[i] = new Dog();
    }
    i = 0;
    while(i++ < 20)
    {
        delete tab[i];
    }
}

// int main()
// {
//     AAnimal *K;

//     K = new AAnimal;
// }

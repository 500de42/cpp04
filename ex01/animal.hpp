#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        virtual void makeSound() const;
        virtual ~Animal();
        Animal &operator=(const Animal &src);
        Animal(const Animal &copy);
        std::string getType() const;
};

#endif
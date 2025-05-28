#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Dog : public Animal
{
    private :
        Brain *a;
    public:
        Dog();
        Dog(std::string type);
        ~Dog();
        Dog &operator=(const Dog &src);
        Dog(const Dog &copy);
        void makeSound() const;
        virtual std::string getType() const;
};

#endif
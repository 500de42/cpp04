#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "animal.hpp"
#include <iostream>
class WrongAnimal
{
    protected :
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        ~WrongAnimal();
        WrongAnimal &operator=(const WrongAnimal &src);
        WrongAnimal(const WrongAnimal &copy);
        virtual void makeSound() const;
        std::string getType() const;
};

#endif

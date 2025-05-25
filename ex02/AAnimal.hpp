#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

class AAnimal
{
    protected :
        std::string type;
    public:
        AAnimal();
        AAnimal(std::string type);
        virtual void makeSound() const;
        virtual ~AAnimal();
        AAnimal &operator=(const AAnimal &src);
        AAnimal(const AAnimal &copy);
        virtual std::string getType() const = 0;
};

#endif
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "animal.hpp"
#include "WrongAnimal.hpp"
#include <iostream>
class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat &operator=(const WrongCat &src);
        WrongCat(const WrongCat &copy);
        void makeSound() const;
};

#endif

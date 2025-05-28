#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"
#include "Brain.hpp"
#include <iostream>
class Cat : public Animal
{
    private :
        Brain *a;
    public:
        Cat();
        Cat(std::string type);
        ~Cat();
        Cat &operator=(const Cat &src);
        Cat(const Cat &copy);
        void makeSound() const;
        virtual std::string getType() const;
};
#endif

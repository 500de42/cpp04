#include "animal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "copy constructor called" << std::endl;
    this->type = copy.type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "copy assigment constructor called" << std::endl;
    this->type = src.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

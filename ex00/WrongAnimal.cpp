#include "animal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = copy.type;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "WrongAnimal copy assigment constructor called" << std::endl;
    this->type = src.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

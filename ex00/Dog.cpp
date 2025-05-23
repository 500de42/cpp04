#include "animal.hpp"

Dog::Dog()
{
    std::cout << this->type << " default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << this->type <<" constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
    std::cout << this->type << " copy assigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

Dog::Dog(const Dog &copy)
{
    std::cout << this->type << " copy constructor called" << std::endl;
    this->type = copy.getType();
}

Dog::~Dog()
{
    std::cout << this->type << " default destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->type << "says \"WOUAF\"" << std::endl;
}

#include "animal.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout <<"Dog constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog &src)
{
    std::cout << "Dog copy assigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.getType();
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog says \"WOUAF\"" << std::endl;
}

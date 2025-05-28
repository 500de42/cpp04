#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->a = new Brain;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout <<"Dog constructor called" << std::endl;
    this->a = new Brain;
}

Dog& Dog::operator=(const Dog &src)
{
    std::cout << "Dog copy assigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    if (this->a)
        delete this->a;
    this->a = new Brain(*src.a);
    return *this;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = copy.getType();
    if (this->a)
        delete this->a;
    this->a = new Brain(*copy.a);
}

Dog::~Dog()
{
    std::cout << "Dog default destructor called" << std::endl;
    delete this->a;
}

void Dog::makeSound() const
{
    std::cout << "Dog says \"WOUAF\"" << std::endl;
}

std::string Dog::getType() const
{
    return this->type;
}

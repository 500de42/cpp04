#include "Dog.hpp"

Dog::Dog()
{
    std::cout << this->type << "Dog default constructor called" << std::endl;
    this->a = new Brain;
}

Dog::Dog(std::string type) : Animal(type)
{
    std::cout << this->type <<"Dog constructor called" << std::endl;
    this->a = new Brain;
}

Dog& Dog::operator=(const Dog &src)
{
    std::cout << this->type << "Dog copy assigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    if (this->a)
        delete this->a;
    this->a = new Brain(*src.a);
    return *this;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
    std::cout << this->type << "Dog copy constructor called" << std::endl;
    this->type = copy.getType();
    if (this->a)
        delete this->a;
    this->a = new Brain(*copy.a);
}

Dog::~Dog()
{
    std::cout << this->type << " Dog default destructor called" << std::endl;
    delete this->a;
}

void Dog::makeSound() const
{
    std::cout << this->type << "Dog says \"WOUAF\"" << std::endl;
}

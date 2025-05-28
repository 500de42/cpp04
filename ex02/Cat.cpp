#include "Cat.hpp"

Cat::Cat()
{
    std::cout <<  "Cat default constructor called" << std::endl;
    this->a = new Brain;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
    this->a = new Brain;
}

Cat& Cat::operator=(const Cat &src)
{
    std::cout <<  "Cat copy assigment constructor called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    if (this->a)
        delete this->a;
    this->a = new Brain(*src.a);
    return *this;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout <<  "Cat copy constructor called" << std::endl;
    this->type = copy.getType();
    if (this->a)
        delete this->a;
    this->a = new Brain(*copy.a);
}

Cat::~Cat()
{
    std::cout <<  "Cat default destructor called" << std::endl;
    delete this->a;
}

void Cat::makeSound() const
{
    std::cout <<  "says \"MIAOUW\"" << std::endl;
}

std::string Cat::getType() const
{
    return this->type;
}

#include "animal.hpp"

Cat::Cat()
{
    std::cout <<  "Cat default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << "Cat constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
    std::cout << "Cat copy assigment constructor called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.getType();
}

Cat::~Cat()
{
    std::cout << "Cat default destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat says \"MIAOUW\"" << std::endl;
}

#include "animal.hpp"

Cat::Cat()
{
    std::cout << this->type << " default constructor called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
    std::cout << this->type <<" constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &src)
{
    std::cout << this->type << " copy assigment constructor called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

Cat::Cat(const Cat &copy)
{
    std::cout << this->type << " copy constructor called" << std::endl;
    this->type = copy.getType();
}

Cat::~Cat()
{
    std::cout << this->type << " default destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << "says \"MIAOUW\"" << std::endl;
}

#include "animal.hpp"

Animal::Animal()
{
    std::cout << "animal default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "animal constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
    std::cout << "animal copyAssigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

Animal::Animal(const Animal &cop)
{
    std::cout << "animal copy constructor called" << std::endl;
    this->type = cop.getType();
}

Animal::~Animal()
{
    std::cout << "animal default destructor called" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "This animal doesn't make any sound." << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}

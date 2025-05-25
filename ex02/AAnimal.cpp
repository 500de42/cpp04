#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "Aanimal default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "Aanimal constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &src)
{
    std::cout << "Aanimal copyAssigment called" << std::endl;
    if (this->type != src.type)
        this->type = src.type;
    return *this;
}

AAnimal::AAnimal(const AAnimal &cop)
{
    std::cout << "Aanimal copy constructor called" << std::endl;
    this->type = cop.getType();
}

AAnimal::~AAnimal()
{
    std::cout << "Aanimal default destructor called" << std::endl;
}

void AAnimal::makeSound() const
{
	std::cout << "This Aanimal doesn't make any sound." << std::endl;
}

std::string AAnimal::getType() const
{
    return this->type;
}
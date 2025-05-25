#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy)
{
    std::cout << "copy constructor called" << std::endl;
    this->type = copy.type;
}
void WrongCat::makeSound() const
{
    std::cout << "WrongCat" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    std::cout << "copy assigment constructor called" << std::endl;
    this->type = src.type;
    return *this;
}

// std::string WrongCat::getType() const
// {
//     return this->type;
// }

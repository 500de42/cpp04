#include "animal.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    this->type = copy.type;
}
// void WrongCat::makeSound() const
// {
//     std::cout << "WrongCat" << std::endl;
// }

WrongCat& WrongCat::operator=(const WrongCat &src)
{
    std::cout << "WrongCat copy assigment constructor called" << std::endl;
    this->type = src.type;
    return *this;
}

// std::string WrongCat::getType() const
// {
//     return this->type;
// }

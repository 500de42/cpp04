#include "../include/Ice.hpp"

Ice::Ice(std::string const & type) : AMateria(type)
{
    this->type = type;
}

Ice::Ice() : AMateria()
{
    this->type = "ice";
}

Ice::Ice(const Ice &copy)
{
    this->type = copy.getType();
}

Ice::~Ice()
{

}

std::string const &Ice::getType() const
{
    return this->type;
}

Ice &Ice::operator=(const Ice &src)
{
    this->type = src.getType();
    return *this;
}

AMateria *Ice::clone() const
{
    Ice *a = new Ice(*this);
    return (a);
}

void Ice::use(ICharacter& target)
{
   std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl; 
}

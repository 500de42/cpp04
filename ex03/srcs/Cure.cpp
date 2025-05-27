#include "../include/Cure.hpp"

Cure::Cure(std::string const & type) : AMateria(type)
{
    this->type = type;
}

Cure::Cure(const Cure &copy)
{
    this->type = copy.getType();
}

Cure::Cure() : AMateria()
{
    this->type = "cure";
}

Cure::~Cure()
{

}

std::string const &Cure::getType() const
{
    return this->type;
}

Cure &Cure::operator=(const Cure &src)
{
    this->type = src.getType();
    return *this;
}

AMateria *Cure::clone() const
{
    Cure *a = new Cure(*this);
    return (a);
}

void Cure::use(ICharacter& target)
{
   std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl; 
}
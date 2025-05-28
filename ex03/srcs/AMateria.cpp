#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::AMateria()
{

}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
    return this->type;
}

AMateria &AMateria::operator=(const AMateria &src)
{
    this->type = src.getType();
    return *this;
}

void AMateria::use(ICharacter& target)
{
    if (target.getName() == "cure")
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl; 
    else if (target.getName() == "ice")
           std::cout << "* shoots an ice bolt at " << target.getName() << " *"  << std::endl; 
}

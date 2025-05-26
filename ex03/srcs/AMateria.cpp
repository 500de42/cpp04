#include "../include/AMateria.hpp"

AMateria::AMateria(std::string const & type)
{

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

}

void AMateria::use(ICharacter& target)
{

}

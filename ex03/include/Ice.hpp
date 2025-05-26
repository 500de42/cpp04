#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Icharacter.hpp"

class Ice : public AMateria
{
    public :
        void use(ICharacter& target);
        AMateria* clone() const;
        Ice(std::string const & type);
        Ice();
        ~Ice();
        Ice &operator=(const Ice &src);
};

#endif
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "Icharacter.hpp"

class Ice : public AMateria
{
    public :
        virtual AMateria* clone() const;
        Ice(std::string const & type);
        Ice();
        ~Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &src);
        virtual std::string const &getType() const;
        virtual void use(ICharacter& target);
};

#endif
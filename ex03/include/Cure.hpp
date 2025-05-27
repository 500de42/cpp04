#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "Icharacter.hpp"

class Cure : public AMateria
{
    public :
        AMateria* clone() const;
        Cure(std::string const & type);
        Cure();
        ~Cure();
        Cure(const Cure &copy);
        virtual std::string const &getType() const;
        Cure &operator=(const Cure &src);
        virtual void use(ICharacter& target);
};

#endif
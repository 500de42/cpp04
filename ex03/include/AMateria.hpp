#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "Icharacter.hpp"

class AMateria
{
    protected:
        std::string type;
    public :
        AMateria(std::string const & type);
        AMateria();
        virtual ~AMateria();
        AMateria &operator=(const AMateria &src);
        std::string const &getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};


#endif
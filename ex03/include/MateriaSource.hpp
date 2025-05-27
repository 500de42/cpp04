#ifndef IMATERIA_HPP
#define IMATERIA_HPP

#include <iostream>
#include "AMateria.hpp"
#include "Icharacter.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private :
        AMateria *Tab[4];
        int idxTab;
    public:
        MateriaSource();
        virtual ~MateriaSource() {};
        MateriaSource &operator=(const MateriaSource &src);
        MateriaSource(const MateriaSource &copy);
        virtual void learnMateria(AMateria*);
        virtual AMateria* createMateria(std::string const & type);
};

#endif
#ifndef IMATERIASOURCE
#define IMATERIASOURCE

#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
    public:
    IMateriaSource(const IMateriaSource &copy);
    IMateriaSource();
    ~IMateriaSource();
    IMateriaSource &operator=(const IMateriaSource &src);
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(std::string const & type) = 0;
};

#endif
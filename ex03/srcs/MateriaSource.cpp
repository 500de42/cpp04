#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

MateriaSource::MateriaSource()
{
    this->Tab[0] = 0;
    this->Tab[1] = 0;
    this->Tab[2] = 0;
    this->Tab[3] = 0;
}

// MateriaSource &MateriaSource::operator=(const MateriaSource &src)
// {

// }

// MateriaSource::MateriaSource(const MateriaSource &copy)
// {

// }

void MateriaSource::learnMateria(AMateria *m)
{
    if (idxTab < 4)
    {
        this->Tab[idxTab] = m->clone();
        this->idxTab++;
    }
    else
        std::cout << "Copie impossible le Tableau est plein" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    if (type != "cure" && type != "ice")
        std::cout << "le type n est pas reconnue" << std::endl;
    else
    {
        for(int i = 0; i < 4; i++)
        {
            if (this->Tab[i] != 0 && this->Tab[i]->getType() == type)
                return this->Tab[this->idxTab]->clone();
        }        
    }
    return (NULL);
}

// MateriaSource::~MateriaSource()
// {

// }



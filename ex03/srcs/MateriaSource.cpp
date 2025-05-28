#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

MateriaSource::MateriaSource()
{
    this->idxTab = 0;
    this->Tab[0] = 0;
    this->Tab[1] = 0;
    this->Tab[2] = 0;
    this->Tab[3] = 0;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src.Tab[i] != 0)
        {
           this->Tab[i] = src.Tab[i]->clone();
        }
    }
    return *this;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy.Tab[i] != 0)
        {
           this->Tab[i] = copy.Tab[i]->clone();
        }
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    if (idxTab < 4)
    {
        this->Tab[idxTab] = m->clone();
        delete m;
        this->idxTab++;
    }
    else
        std::cout << "Copie impossible le Tableau est plein" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
    if (type != "cure" && type != "ice")
        std::cout << "le type n est pas reconnue" << std::endl;
    else if (this->idxTab == 0)
        std::cout << "Veuillez utiliser la fonction LearnMateria avant celle-ci" << std::endl;
    else
    {
        for(int i = 0; i < this->idxTab; i++)
        {
            if (this->Tab[i] && this->Tab[i]->getType() == type)
            {
                return this->Tab[i]->clone();
            }
        }        
    }
    return (NULL);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->Tab[i] != 0)
        {
           delete this->Tab[i];
        }
    }
}



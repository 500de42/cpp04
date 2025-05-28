#include "../include/Character.hpp"

Character::Character(const Character &copy)
{
    this->inventaire[0] = 0;
    this->inventaire[1] = 0;
    this->inventaire[2] = 0;
    this->inventaire[3] = 0;
    for (int i = 0; i < 4; i++)
    {
        if (copy.inventaire[i] != 0)
        {
            this->inventaire[i] = copy.inventaire[i]->clone();
        }
    }
}

Character::Character()
{
    this->inventaire[0] = 0;
    this->inventaire[1] = 0;
    this->inventaire[2] = 0;
    this->inventaire[3] = 0;
    this->idxDrop = 0;
    int i = 0;
    while (i++ < 999)
        this->drop[i] = 0;
}

Character::Character(std::string Name) : Name(Name)
{
    this->inventaire[0] = 0;
    this->inventaire[1] = 0;
    this->inventaire[2] = 0;
    this->inventaire[3] = 0;
    this->idxDrop = 0;
    int i = 0;
    while (i++ < 999)
        this->drop[i] = 0;
}

int check(AMateria *inventaire[4], AMateria *drop[999], int idx)
{
    int i = 0;
    while (i < 3)
    {
        if (drop[idx] == inventaire[i])
            return 1;
        i++;
    }
    return 0;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (this->inventaire[i] != 0)
            delete this->inventaire[i];
    }
    for(int i = 0; i < this->idxDrop; i++)
    {
        if (this->drop[i] != 0)
        {
            if (check(this->inventaire, this->drop, i))
                this->drop[i] = 0;
            else
                delete this->drop[i];
        }
    }
}

Character &Character::operator=(const Character &src)
{
    for(int i = 0; i < 4; i++)
    {
        if (this->inventaire[i] != 0)
            delete this->inventaire[i];
    }
    for(int i = 0; i < 4; i++)
    {
        if (src.inventaire[i] != 0)
        {
            this->inventaire[i] = src.inventaire[i]->clone();
        }
    }
    return *this;
}

void Character::equip(AMateria *m)
{
    if (this->inventaire[0] == 0)
        this->inventaire[0] = m;
    else if (this->inventaire[1] == 0)
        this->inventaire[1] = m;
    else if (this->inventaire[2] == 0)
        this->inventaire[2] = m;
    else if (this->inventaire[3] == 0)
        this->inventaire[3] = m;
    else
        std::cout << "inventaire plein veuillez utiliser la fonciton 'unequip()' pour liberer une place" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx > 4 || idx < 0)
    {
        std::cout << "Index non valide" << std::endl;
        return ;
    }
    if (this->inventaire[idx] != 0)
    {
        this->drop[idxDrop] = this->inventaire[idx];
        this->idxDrop++;
        this->inventaire[idx] = 0;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (this->inventaire[idx] == 0)
    {
        std::cout << "Mauvais index ou aucun Materia equiper" << std::endl;
        return ;
    }
    this->inventaire[idx]->use(target);
}

std::string const &Character::getName() const
{
    return this->Name;
}

// std::string const &Character::getName() const
// {
//     return this->
// }

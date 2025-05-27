#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "AMateria.hpp"
#include "Icharacter.hpp"

class Character : public ICharacter
{
    private:
        AMateria *inventaire[4];
        AMateria *drop[999];
        int idxDrop;
        std::string Name;
    public:
        Character();
        Character(std::string Name);
        Character &operator=(const Character &src);
        Character(const Character &copy);
        virtual ~Character();
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};

#endif
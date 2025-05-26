#ifndef CHARACTER
#define CHARACTER

#include <iostream>
#include "AMateria.hpp"
#include "Icharacter.hpp"
#include "IMateria.hpp"

class Character : public ICharacter
{
    private:
        IMateria inventaire[4];
    public:
        Character(const Character &copy);
        Character();
        virtual ~Character();
        Character &operator=(const Character &src);
        virtual ~Character() {};
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, Character& target) = 0;
};

#endif
#include "../include/AMateria.hpp"
#include "../include/Icharacter.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/IMateriaSource.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}



// int main ()
// {
//     IMateriaSource* src = new MateriaSource();

//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter *nene = new Character("nene");
//     ICharacter *tt = new Character("ii");
//     AMateria *tmp = src->createMateria("ice");
//     nene->equip(tmp);
//     nene->unequip(0);
//     nene->use(0, *tt);
//     delete nene;
//     delete src;
//     delete tt;
// }

// #include "../include/IMateriaSource.hpp"
// #include "../include/Ice.hpp"
// #include "../include/Cure.hpp"

// IMateriaSource::IMateriaSource()
// {
// }

// IMateriaSource &IMateriaSource::operator=(const IMateriaSource &src)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         if (src.Tab[i] != 0)
//         {
//            this->Tab[i] = src.Tab[i]->clone();
//         }
//     }
//     return *this;
// }
// 
// IMateriaSource::IMateriaSource(const IMateriaSource &copy)
// {
//     for (int i = 0; i < 4; i++)
//     {
//         if (copy.Tab[i] != 0)
//         {
//            this->Tab[i] = copy.Tab[i]->clone();
//         }
//     }
// }

// void IMateriaSource::learnMateria(AMateria *m)
// {
//     if (idxTab < 4)
//     {
//         this->Tab[idxTab] = m->clone();
//         this->idxTab++;
//     }
//     else
//         std::cout << "Copie impossible le Tableau est plein" << std::endl;
// }

// AMateria *IMateriaSource::createMateria(std::string const & type)
// {
//     if (type != "cure" && type != "ice")
//         std::cout << "le type n est pas reconnue" << std::endl;
//     else
//     {
//         for(int i = 0; i < 4; i++)
//         {
//             if (this->Tab[i] != 0 && this->Tab[i]->getType() == type)
//                 return this->Tab[this->idxTab]->clone();
//         }        
//     }
//     return (NULL);
// }

// IMateriaSource::~IMateriaSource()
// {

// }



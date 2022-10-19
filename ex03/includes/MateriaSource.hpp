#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include <iostream>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
    public:
        void learnMateria(AMateria*);
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        MateriaSource & operator=(MateriaSource const & rhs);
        ~MateriaSource();
        AMateria* createMateria(std::string const & type);

    private:
        AMateria* _inventory[4];
};

#endif
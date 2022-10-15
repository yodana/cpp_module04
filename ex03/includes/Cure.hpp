#ifndef CURE_H
# define CURE_H
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{

    public:
        Cure();
        ~Cure(void);
        Cure(Cure const &src);
        Cure & operator=(Cure const & rhs);
        AMateria* clone() const;
};

#endif
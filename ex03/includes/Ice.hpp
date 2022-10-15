#ifndef ICE_H
# define ICE_H
#include <iostream>
#include "AMateria.hpp"

class Ice : public AMateria
{

    public:
        Ice();
        ~Ice(void);
        Ice(Ice const &src);
        Ice & operator=(Ice const & rhs);
        AMateria* clone() const;
};

#endif
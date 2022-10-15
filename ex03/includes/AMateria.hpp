#ifndef AMATERIA_H
# define AMATERIA_H
#include <iostream>

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria();
        ~AMateria(void);
        AMateria(AMateria const &src);
        AMateria & operator=(AMateria const & rhs);
        AMateria(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        //virtual void use(ICharacter& target);

};

#endif
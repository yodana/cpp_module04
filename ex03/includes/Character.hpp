#ifndef CHARACTER_H
# define CHARACTER_H
#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string name);
        Character(Character const &src);
        Character & operator=(Character const & rhs);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria* _inventory[4];
};

#endif 
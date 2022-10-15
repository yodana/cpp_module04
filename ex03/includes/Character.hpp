#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

class Character : public ICharacter
{
    public:
        Character();
        Character(std::string name);
        Character(Character const &src);
        Character & operator=(Character const & rhs);
        ~Character();
        std::string const & getName() const = 0;
        void equip(AMateria* m) = 0;
        void unequip(int idx) = 0;
        void use(int idx, ICharacter& target) = 0;

    private:
        std::string _name;
        AMateria* _inventory[4];
};
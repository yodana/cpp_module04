
#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"

#include <iostream>

int main( void ) {
    AMateria *a = new Ice();
    std::cout << a->getType() << std::endl;
    ICharacter* me = new Character("me");
    std::cout << me->getName() << std::endl;
    me->equip(a);
    me->use(0, *me);
    AMateria *b = new Cure();
    me->equip(b);
    me->use(1, *me);
    return 0;
}
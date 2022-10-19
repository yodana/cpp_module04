
#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/Character.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

#include <iostream>

int main( void ) {
    /*AMateria *a = new Ice();
    std::cout << a->getType() << std::endl;
    ICharacter* me = new Character("me");
    std::cout << me->getName() << std::endl;
    me->equip(a);
    me->use(0, *me);
    AMateria *b = new Cure();
    me->equip(b);
    me->use(1, *me);
    ICharacter *clone(me);
    clone->use(1, *clone);
    ICharacter *clone2;
    clone2 = me;
    clone2->use(0, *clone);
    delete a;
    delete b;
    delete me;*/
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
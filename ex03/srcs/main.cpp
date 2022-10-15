#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include <iostream>

int main( void ) {
    AMateria *a = new Ice();
    std::cout << a->getType() << std::endl;
    
    return 0;
}
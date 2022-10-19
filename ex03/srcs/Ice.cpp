#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"

Ice::Ice(){
    this->_type = "ice"; 
    return ;
}

Ice::~Ice(void){
    return ;
}

Ice::Ice(Ice const &src){
    *this = src;
}

AMateria* Ice::clone() const{
    AMateria* pa;
    pa = new Ice();
    return pa;
}

Ice& Ice::operator=(Ice const & rhs){
    if (this != &rhs){
    }
    return *this;
}

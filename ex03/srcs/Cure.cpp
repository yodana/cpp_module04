#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"

Cure::Cure(){
    this->_type = "cure"; 
    return ;
}

Cure::~Cure(void){
    return ;
}

Cure::Cure(Cure const &src){
    *this = src;
}

Cure& Cure::operator=(Cure const & rhs){
    if (this != &rhs){
    }
    return *this;
}

AMateria* Cure::clone() const{
    AMateria* pa = new Cure();
    return pa;
}
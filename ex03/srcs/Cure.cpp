#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Cure.hpp"
#include "../includes/ICharacter.hpp"

Cure::Cure(){
    this->_type = "cure"; 
    std::cout << "Cure is alive!" << std::endl;
    return ;
}

Cure::~Cure(void){
    std::cout << "Cure is dead!" << std::endl;
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

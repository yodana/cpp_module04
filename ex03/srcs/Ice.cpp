#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Cure.hpp"

Ice::Ice(){
    this->_type = "ice"; 
    std::cout << "Ice is alive!" << std::endl;
    return ;
}

Ice::~Ice(void){
    std::cout << "Ice is dead!" << std::endl;
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

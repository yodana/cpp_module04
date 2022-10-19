#include <iostream>
#include "../includes/AMateria.hpp"

AMateria::AMateria(){
    return ;
}

AMateria::~AMateria(void){
    return ;
}

AMateria::AMateria(std::string const & type){
    this->_type = type;
}

std::string const & AMateria::getType() const{
    return this->_type;
}

AMateria::AMateria(AMateria const &src){
    *this = src;
}


AMateria& AMateria::operator=(AMateria const & rhs){
    if (this != &rhs){
    }
    return *this;
}

void AMateria::use(ICharacter& target){
    if (this->getType() == "ice")
        std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    else if (this->getType() == "cure")
        std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    return ;
}
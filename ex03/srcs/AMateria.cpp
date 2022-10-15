#include <iostream>
#include "../includes/AMateria.hpp"

AMateria::AMateria(){
    std::cout << "Materia is alive!" << std::endl;
    return ;
}

AMateria::~AMateria(void){
    std::cout << "Materia is dead!" << std::endl;
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

AMateria* AMateria::clone(){
    return *this;
}

//void AMaterial::use(ICharacter& target){
//}

AMateria& AMateria::operator=(AMateria const & rhs){
    if (this != &rhs){
    }
    return *this;
}

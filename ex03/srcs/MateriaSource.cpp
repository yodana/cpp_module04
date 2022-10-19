#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource(){
     for(int i = 0; i < 4; i++){
        this->_inventory[i] = NULL;
    }
    return ;
}

MateriaSource::MateriaSource(MateriaSource const &src){
    AMateria *tmp[4];
    for(int i = 0; i < 4; i++){
        if (src._inventory[i] != NULL){
            tmp[i] = src._inventory[i];
            delete src._inventory[i];
        }
        else    
            tmp[i] = NULL;
    }
    *this = src;
    *this->_inventory = *tmp;
}

MateriaSource::~MateriaSource(void){
    for(int i = 0; i < 4; i++){
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
    return ;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & rhs){
    if (this != &rhs){
        AMateria *tmp[4];
        for(int i = 0; i < 4; i++){
            if (rhs._inventory[i] != NULL){
                tmp[i] = rhs._inventory[i];
                delete rhs._inventory[i];
            }
            else
                tmp[i] = NULL;
        }
        *this->_inventory = *tmp;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *src){
    for(int i = 0; i < 4; i++){
        if (this->_inventory[i] == NULL){
            this->_inventory[i] = src;
            return ;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type){
    for(int i = 0; i < 4; i++)
        if (this->_inventory[i]->getType() == type)
            return this->_inventory[i]->clone();
    return 0;
}
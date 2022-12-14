#include <iostream>
#include "../includes/AMateria.hpp"
#include "../includes/Ice.hpp"
#include "../includes/Character.hpp"

Character::Character():_name("default_name"){
     for(int i = 0; i < 4; i++){
        this->_inventory[i] = NULL;
    }
    return ;
}

Character::Character(std::string name):_name(name){
    for(int i = 0; i < 4; i++){
        this->_inventory[i] = NULL;
    }
}

Character::Character(Character const &src){
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

Character::~Character(void){
    for(int i = 0; i < 4; i++){
        if (this->_inventory[i] != NULL)
            delete this->_inventory[i];
    }
    return ;
}

Character& Character::operator=(Character const & rhs){
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
        this->_name = rhs._name;
        *this->_inventory = *tmp;
    }
    return *this;
}

std::string const & Character::getName() const{
    return this->_name;
}

void Character::equip(AMateria* m){
     for(int i = 0; i < 4; i++){
        if (this->_inventory[i] == NULL){
            this->_inventory[i] = m;
            return ;
        }
    }
    return ;
}

void Character::unequip(int idx){
    if (idx < 4 && this->_inventory[idx] != NULL){
        this->_inventory[idx] = NULL;
    }
    return ;
}

void Character::use(int idx, ICharacter& target){
    if(idx < 4 && this->_inventory[idx] != NULL){
        this->_inventory[idx]->use(target);
    }
    return;
}
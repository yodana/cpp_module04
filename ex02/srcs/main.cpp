#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/WrongAnimal.hpp"
#include <iostream>

int main( void ) {
    // Animal *animal = new Animal() // NOT OK
    Animal *animal = new Cat(); // OK
    animal->makeSound();
    return 0;
}
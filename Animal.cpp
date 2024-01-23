#include "Animal.h"
#include <iostream>

using namespace std;

namespace DogNamespace {

    Dog::Dog(const std::string& name) : name(name) {}

    void Dog::sound() const {
        std::cout << "Woof! Woof!" << std::endl;
    }

    void Dog::show() const {
        std::cout << "Name: " << name << std::endl;
    }

    void Dog::type() const {
        std::cout << "Dog" << std::endl;
    }

}

namespace CatNamespace {

    Cat::Cat(const std::string& name) : name(name) {}

    void Cat::sound() const {
        std::cout << "Meow! Meow!" << std::endl;
    }

    void Cat::show() const {
        std::cout << "Name: " << name << std::endl;
    }

    void Cat::type() const {
        std::cout << "Cat" << std::endl;
    }

}

namespace ParrotNamespace {

    Parrot::Parrot(const std::string& name) : name(name) {}

    void Parrot::sound() const {
        std::cout << "Squawk! Squawk!" << std::endl;
    }

    void Parrot::show() const {
        std::cout << "Name: " << name << std::endl;
    }

    void Parrot::type() const {
        std::cout << "Parrot" << std::endl;
    }

}

namespace HamsterNamespace {

    Hamster::Hamster(const std::string& name) : name(name) {}

    void Hamster::sound() const {
        std::cout << "Squeak! Squeak!" << std::endl;
    }

    void Hamster::show() const {
        std::cout << "Name: " << name << std::endl;
    }

    void Hamster::type() const {
        std::cout << "Hamster" << std::endl;
    }

}
#include "shape.h"

#include <iostream>
#include <fstream>

void Shape::show() const {
    std::cout << "This is a generic shape." << std::endl;
}

void Shape::save(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for saving." << std::endl;
    }
}

void Shape::load(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for loading." << std::endl;
    }
}
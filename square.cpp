#include "square.h"

#include <iostream>
#include <fstream>

Square::Square(int x, int y, int side) : x_(x), y_(y), side_(side) {}

void Square::show() const {
    std::cout << "Square: X = " << x_ << ", Y = " << y_ << ", Side = " << side_ << std::endl;
}

void Square::save(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for saving." << std::endl;
    }
}

void Square::load(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for loading." << std::endl;
    }
}
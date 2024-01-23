#include "ellipse.h"

#include <iostream>
#include <fstream>

Ellipse::Ellipse(int x, int y, int majorAxis, int minorAxis) : x_(x), y_(y), majorAxis_(majorAxis), minorAxis_(minorAxis) {}

void Ellipse::show() const {
    std::cout << "Ellipse: X = " << x_ << ", Y = " << y_ << ", Major Axis = " << majorAxis_ << ", Minor Axis = " << minorAxis_ << std::endl;
}

void Ellipse::save(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for saving." << std::endl;
    }
}

void Ellipse::load(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for loading." << std::endl;
    }
}
#include "circle.h"

#include <iostream>
#include <fstream>

Circle::Circle(int x, int y, int radius) : x_(x), y_(y), radius_(radius) {}

void Circle::show() const {
    std::cout << "Circle: X = " << x_ << ", Y = " << y_ << ", Radius = " << radius_ << std::endl;
}

void Circle::save(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for saving." << std::endl;
    }
}

void Circle::load(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for loading." << std::endl;
    }
}
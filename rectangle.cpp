#include "rectangle.h"

#include <iostream>
#include <fstream>

Rectangle::Rectangle(int x, int y, int width, int height) : x_(x), y_(y), width_(width), height_(height) {}

void Rectangle::show() const {
    std::cout << "Rectangle: X = " << x_ << ", Y = " << y_ << ", Width = " << width_ << ", Height = " << height_ << std::endl;
}

void Rectangle::save(const char* filename) const {
    std::ofstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.write(reinterpret_cast<const char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for saving." << std::endl;
    }
}

void Rectangle::load(const char* filename) {
    std::ifstream file(filename, std::ios::binary);
    if (file.is_open()) {
        file.read(reinterpret_cast<char*>(this), sizeof(*this));
        file.close();
    }
    else {
        std::cerr << "Error opening file for loading." << std::endl;
    }
}
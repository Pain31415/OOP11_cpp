#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int x, int y, int width, int height);
    void show() const override;
    void save(const char* filename) const override;
    void load(const char* filename) override;

private:
    int x_;
    int y_;
    int width_;
    int height_;
};

#endif // RECTANGLE_H
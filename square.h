#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape {
public:
    Square(int x, int y, int side);
    void show() const override;
    void save(const char* filename) const override;
    void load(const char* filename) override;

private:
    int x_;
    int y_;
    int side_;
};

#endif // SQUARE_H

#ifndef ELLIPSE_H
#define ELLIPSE_H

#include "shape.h"

class Ellipse : public Shape {
public:
    Ellipse(int x, int y, int majorAxis, int minorAxis);
    void show() const override;
    void save(const char* filename) const override;
    void load(const char* filename) override;

private:
    int x_;
    int y_;
    int majorAxis_;
    int minorAxis_;
};

#endif // ELLIPSE_H
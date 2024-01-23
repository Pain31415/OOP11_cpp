#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"

class Circle : public Shape {
public:
    Circle(int x, int y, int radius);
    void show() const override;
    void save(const char* filename) const override;
    void load(const char* filename) override;

private:
    int x_;
    int y_;
    int radius_;
};

#endif // CIRCLE_H
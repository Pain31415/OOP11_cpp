#ifndef SHAPE_H
#define SHAPE_H

class Shape {
public:
    virtual void show() const = 0;
    virtual void save(const char* filename) const = 0;
    virtual void load(const char* filename) = 0;
    virtual ~Shape() {}
};

#endif // SHAPE_H
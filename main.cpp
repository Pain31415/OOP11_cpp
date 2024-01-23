#include "square.h"
#include "rectangle.h"
#include "circle.h"
#include "ellipse.h"

int main() {
    const char* squareFile = "square.dat";
    const char* rectangleFile = "rectangle.dat";
    const char* circleFile = "circle.dat";
    const char* ellipseFile = "ellipse.dat";

    Square square(1, 2, 5);
    Rectangle rectangle(3, 4, 6, 8);
    Circle circle(10, 10, 7);
    Ellipse ellipse(5, 5, 4, 2);

    square.show();
    square.save(squareFile);

    rectangle.show();
    rectangle.save(rectangleFile);

    circle.show();
    circle.save(circleFile);

    ellipse.show();
    ellipse.save(ellipseFile);

    Square loadedSquare(0, 0, 0);
    loadedSquare.load(squareFile);
    loadedSquare.show();

    Rectangle loadedRectangle(0, 0, 0, 0);
    loadedRectangle.load(rectangleFile);
    loadedRectangle.show();

    Circle loadedCircle(0, 0, 0);
    loadedCircle.load(circleFile);
    loadedCircle.show();

    Ellipse loadedEllipse(0, 0, 0, 0);
    loadedEllipse.load(ellipseFile);
    loadedEllipse.show();

    return 0;
}
#include "Equation.h"
#include <iostream>
#include <cmath>

namespace EquationSolver {

    LinearEquation::LinearEquation(double a, double b) : a(a), b(b) {}

    void LinearEquation::setInput() {
        std::cout << "Enter coefficients for the linear equation (ax + b = 0):" << std::endl;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;

        std::cout << "Enter coefficient b: ";
        std::cin >> b;

        double result = pow(a * x + b, 2);
        std::cout << "Result of (ax + b)^2: " << result << std::endl;
    }

    void LinearEquation::solve() const {
        if (a == 0) {
            std::cout << "Not a linear equation." << std::endl;
        }
        else {
            double root = -b / a;
            std::cout << "Linear equation root: " << root << std::endl;
        }
    }

    QuadraticEquation::QuadraticEquation(double a, double b, double c) : a(a), b(b), c(c) {}

    void QuadraticEquation::setInput() {
        std::cout << "Enter coefficients for the quadratic equation (ax^2 + bx + c = 0):" << std::endl;
        std::cout << "Enter coefficient a: ";
        std::cin >> a;

        std::cout << "Enter coefficient b: ";
        std::cin >> b;

        std::cout << "Enter coefficient c: ";
        std::cin >> c;

        double result = pow(a * x + b * x + c, 2);
        std::cout << "Result of (ax^2 + bx + c)^2: " << result << std::endl;
    }

    void QuadraticEquation::solve() const {
        if (a == 0) {
            std::cout << "Not a quadratic equation." << std::endl;
        }
        else {
            double discriminant = pow(b, 2) - 4 * a * c;
            if (discriminant < 0) {
                std::cout << "No real roots for the quadratic equation." << std::endl;
            }
            else if (discriminant == 0) {
                double root = -b / (2 * a);
                std::cout << "Quadratic equation has one real root: " << root << std::endl;
            }
            else {
                double root1 = (-b + sqrt(discriminant)) / (2 * a);
                double root2 = (-b - sqrt(discriminant)) / (2 * a);
                std::cout << "Quadratic equation has two real roots: " << root1 << " and " << root2 << std::endl;
            }
        }
    }
}
#include "Equation.h"
#include <iostream>

using namespace std;
using namespace EquationSolver;

int main() {
    LinearEquation linear;
    linear.setInput();

    QuadraticEquation quadratic;
    quadratic.setInput();

    cout << "Solving linear equation..." << endl;
    linear.solve();

    cout << "\nSolving quadratic equation..." << endl;
    quadratic.solve();

    return 0;
}
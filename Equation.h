#ifndef EQUATION_H
#define EQUATION_H

namespace EquationSolver {

    class Equation {
    public:
        virtual void solve() const = 0;
        virtual ~Equation() {}
    };

    class LinearEquation : public Equation {
    private:
        double a, b;
        double x;

    public:
        LinearEquation(double a = 0, double b = 0);
        void setInput();
        void solve() const override;
    };

    class QuadraticEquation : public Equation {
    private:
        double a, b, c;
        double x;

    public:
        QuadraticEquation(double a = 0, double b = 0, double c = 0);
        void setInput();
        void solve() const override;
    };

}

#endif // EQUATION_H
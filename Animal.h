#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

namespace DogNamespace {

    class Dog {
    private:
        std::string name;

    public:
        Dog(const std::string& name);
        void sound() const;
        void show() const;
        void type() const;
    };

}

namespace CatNamespace {

    class Cat {
    private:
        std::string name;

    public:
        Cat(const std::string& name);
        void sound() const;
        void show() const;
        void type() const;
    };

}

namespace ParrotNamespace {

    class Parrot {
    private:
        std::string name;

    public:
        Parrot(const std::string& name);
        void sound() const;
        void show() const;
        void type() const;
    };

}

namespace HamsterNamespace {

    class Hamster {
    private:
        std::string name;

    public:
        Hamster(const std::string& name);
        void sound() const;
        void show() const;
        void type() const;
    };

}

#endif // ANIMAL_H
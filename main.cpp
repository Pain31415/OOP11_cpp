#include "Animal.h"
#include <iostream>

using namespace std;

int main() {
    DogNamespace::Dog myDog("Buddy");
    CatNamespace::Cat myCat("Whiskers");
    ParrotNamespace::Parrot myParrot("Polly");
    HamsterNamespace::Hamster myHamster("Nibbles");

    myDog.show();
    myDog.type();
    myDog.sound();

    cout << endl;

    myCat.show();
    myCat.type();
    myCat.sound();

    cout << endl;

    myParrot.show();
    myParrot.type();
    myParrot.sound();

    cout << endl;

    myHamster.show();
    myHamster.type();
    myHamster.sound();

    return 0;
}
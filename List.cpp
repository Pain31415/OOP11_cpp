#include "List.h"
#include <iostream>

using namespace std;

namespace CustomList {

    void Stack::insert(int value) {
        cout << "Stack Insert: " << value << endl;
    }

    void Stack::remove() {
        cout << "Stack Remove" << endl;
    }

    void Queue::insert(int value) {
        cout << "Queue Insert: " << value << endl;
    }

    void Queue::remove() {
        cout << "Queue Remove" << endl;
    }

}
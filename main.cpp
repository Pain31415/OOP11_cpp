#include "List.h"

int main() {
    CustomList::Stack stack;
    CustomList::Queue queue;

    stack.insert(200);
    stack.remove();

    queue.insert(100);
    queue.remove();

    return 0;
}
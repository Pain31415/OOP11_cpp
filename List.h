#ifndef LIST_H
#define LIST_H

namespace CustomList {

    class BaseList {
    public:
        virtual void insert(int value) = 0;
        virtual void remove() = 0;
        virtual ~BaseList() {}
    };

    class Stack : public BaseList {
    public:
        void insert(int value) override;
        void remove() override;
    };

    class Queue : public BaseList {
    public:
        void insert(int value) override;
        void remove() override;
    };

}

#endif // LIST_H
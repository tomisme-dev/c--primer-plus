#ifndef STACK_HPP_
#define STACK_HPP_

typedef unsigned long Item;

class Stack
{
private:
    static const int MAX = 10;
    Item items[MAX];
    Item Item_NULL = 0;
    int top;
public:
    Stack(/* args */) {
        top = -1;
    }
    ~Stack() {}
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    Item & pop();
};

#endif
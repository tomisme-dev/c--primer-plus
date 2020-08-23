#include "stack.hpp"
#include <iostream>

bool Stack::isEmpty() const {
    return top == -1;
}


bool Stack::isFull() const {
    return top == MAX - 1;
}

bool Stack::push(const Item & item) {
    if(isFull()) {
        return false;
    }

    items[++top] = item;
}


Item & Stack::pop() {
    if(isEmpty()) {
        return Item_NULL;
    }

    return items[top--];
}

int main(int argc, char const *argv[])
{
    using namespace std;
    Stack s;
    for(int i = 0; i < 6; i++) {
        s.push(i * i);
    }
    s.push(12);
    s.push(13);

    Item i;
    while(!s.isEmpty()) {
        cout << "pop: " << s.pop() << endl;;
    }
    return 0;
}

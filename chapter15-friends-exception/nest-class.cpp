#include <iostream>

using namespace std;

// typedef int Item;

template <typename Item>
class Queue {
private:
    class Node {
    public:
        const Item val;
        Node *next;
        Node(const Item & val) : val(val), next(nullptr) {}
    };

    Node *first;
    Node *last;

public:
    Queue(const Item & val) {
        first = new Node(val);
        last = first;
    }

    ~Queue() {
        Node *tmp;
        while (first != nullptr) {
            tmp = first;
            first = first->next;
            delete tmp;
        }
    }

    void show() {
        cout << first->val << endl;
    }

};


int main(int argc, char const *argv[])
{
    Queue<int> q(88);
    q.show();

    return 0;
}

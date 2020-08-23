#include <iostream>

using namespace std;

typedef long Item;


class Queue
{
private:
    // 定义Node
    struct Node
    {
        Item val;
        Node *next;
    };

    Node *front;
    Node *rear;
    int size;
    int limitSize;

    const static int DEFAULT_SIZE = 10;

    Queue(const Queue & q) : size(0) { } // preemptive 
    Queue & operator=(const Queue & q) { return *this;}
    
public:
    Queue() {
        front = nullptr;
        rear = nullptr;
        size = 0;
        limitSize = DEFAULT_SIZE;
    }

    Queue(int limitSize) {
        front = nullptr;
        rear = nullptr;
        size = 0;
        this->limitSize = limitSize;
    }

    ~Queue() {
        while(front != nullptr) {
            Node *next = front->next;
            delete front;
            front = next;
        }
    }

    bool isempty() const {
        return size <= 0;
    }

    bool isfull() const {
        return size >= limitSize;
    }

    int queuecount() const {
        return size;
    }

    bool enqueue(const Item &item) {
        if(isfull()) {
            return false;
        }

        Node *pNode = new Node;
        pNode->val = item;
        pNode->next = nullptr;

        if(rear == nullptr) {
            // 第一个元素加入
            front = rear = pNode;
        } else {
            rear->next = pNode;
            rear = pNode;
        }

        size++;

        return true;
    }

    bool dequeue(Item &item) {
        if(isempty()) {
            return false;
        }

        item = front->val;
        Node *next = front->next;
        delete front;
        front = next;

        // 判断是否是最后一个元素出列
        if(next == nullptr) {
            rear = nullptr;
        }

        size--;
        return true;
    }
};


int main(int argc, char const *argv[])
{
    Queue q(100);
    for(int i = 0; i < 90; i++) {
        q.enqueue(i * i);
    }

    Item i = 0;
    while(q.dequeue(i)) {
        cout << "dequeue: " << i << endl;
    }
    return 0;
}

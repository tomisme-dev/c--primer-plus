#include <iostream>
#include <string>
#include <cstring>

using namespace std;

template <typename T>
const T &my_max(const T &t1, const T &t2)
{
    if (t1 > t2)
    {
        return t1;
    }

    return t2;
}

template <typename Type>
class Stack
{
private:
    static const int MAX = 10;
    Type items[MAX];
    int top;

public:
    Stack() : top(-1) {}
    bool isEmpty()
    {
        return top < 0;
    }

    bool isFull()
    {
        return top >= MAX - 1;
    }

    bool push(const Type &item)
    {
        if (isFull())
        {
            return false;
        }

        items[++top] = item;
        return true;
    }

    bool pop(Type &item);
};

template <typename Type>
bool Stack<Type>::pop(Type &item)
{
    if (isEmpty())
    {
        return false;
    }

    item = items[top--];
    return true;
}

void test_template_method()
{
    auto a = my_max(1, 2);
    double b = my_max(2.3, 1.9);
    cout << a << ", " << b << endl;
}

void fun1()
{
    Stack<long> ids;
    for (int i = 0; i < 6; i++)
    {
        ids.push(i);
    }

    long val;
    while (ids.pop(val))
    {
        cout << val << endl;
    }
}

void fun2()
{
    Stack<int> ids;
    for (int i = 0; i < 6; i++)
    {
        ids.push(i);
    }

    int val;
    while (ids.pop(val))
    {
        cout << val << endl;
    }
}

void test_str_pointer()
{
    Stack<char *> strs;
    char s1[] = "hello";
    char s2[] = "world";
    strs.push(s1);
    strs.push(s2);
    char * sptr;
    strs.pop(sptr);
    cout << sptr << endl;
    cout << (void *) s2 << endl;
    cout << (void *) sptr << endl;
}

int main(int argc, char const *argv[])
{
    // fun1();
    // fun2();
    test_str_pointer();
    return 0;
}

#include <iostream>

using namespace std;

class A
{
private:
    
public:
    long id;
    virtual void show()
    {
        cout << "A.show()" << endl;
    }
};

class B1: virtual public A
{
private:
    /* data */
public:
    void show()
    {
        cout << "B1.show()" << endl;
    }
};

class B2: virtual public A
{
private:
    /* data */
public:
    void show()
    {
        cout << "B2.show()" << endl;
    }
};


class B3: virtual public A
{
private:
    /* data */
public:

    void show()
    {
        cout << "B3.show()" << endl;
    }
};


class C : public B1, public B2, public B3
{
private:
    /* data */
public:
    double size;
    void show()
    {
        cout << "C.show()" << endl;
    }
};


int main(int argc, char const *argv[])
{
    
    C c;
    // c.show();
    cout << sizeof(C) << endl;
    cout << sizeof(B1) << endl;
    cout << sizeof(A) << endl;

    cout << "C: " << &c << endl;
    cout << "B1:" << (B1 *) &c << endl;
    cout << "B2:" << (B2 *) &c << endl;
    cout << "B3:" << (B3 *) &c << endl;
    cout << "C.size: " << &c.size << endl;

    B2 & b2 = c;
    cout << sizeof(b2) << ", " << &b2.id << endl;

    // A & a = c;
    // cout << sizeof(a) << ", " << &a.id << endl;
    

    // B1 b1;
    // A & a = b1;
    // B2 b2;
    // a.show();
    // cout << sizeof(b1) << endl;
    // cout << &b1 << endl;
    // cout << &a << endl;

    // cout << &b2 << endl;
    // cout << (A *)&b2 << endl;



    return 0;
}


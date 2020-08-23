#include <iostream>


using namespace std;

class IntWrap
{
private:
    int value;

public:
    IntWrap(int value)
    {
        this->value = value;
    }


    IntWrap()
    {
        this->value = 0;
    }


    ~IntWrap()
    {
        cout << "IntWrap destructor...." << endl;
    }

    IntWrap & operator=(const IntWrap &intWrap)
    {
        if (this == &intWrap)
        {
            return *this;
        }
        this->value = intWrap.value;
        return *this;
    }

    int getValue() {
        return this->value;
    }

    
};

class Value
{
private:
    IntWrap intWrap;

public:
    Value(const IntWrap &intWrap)
    {
        this->intWrap = intWrap;
    }

    ~Value()
    {
        cout << "Value destructor...." << endl;
    }

    operator int() {
        return this->intWrap.getValue();
    }
};

template <typename T>
T & gogo(T &t) {
    cout << "template: " << t << endl;
}

int main(int argc, char const *argv[])
{
    IntWrap intWrap(100);
    Value v(intWrap);

    int val = v;
    cout << val << endl;

    gogo("hello");

    return 0;
}

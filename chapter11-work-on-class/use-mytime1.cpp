#include "mytime1.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    using namespace std;

    Time t1 = Time(8, 30);
    Time t2 = Time(3, 40);
    Time t4 = Time(5, 50);

    t1.show();
    t2.show();

    Time t3 = t1 + t2 + t4;
    t3.show();

    cout << "t1 addr: " << &t1 << ", t2 addr: " << &t2 << ", t3 addr: " << &t3 << endl;

    Time t5 = t1 + 40;
    t5.show();

    Time t6 = t1.operator+(t2);
    t6.show();

    Time t7 = 40 + t1;
    t7.show();

    cout << "t7=" << t7 << endl;

    return 0;
}

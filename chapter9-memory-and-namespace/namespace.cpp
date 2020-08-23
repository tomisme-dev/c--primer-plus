#include <iostream>
using namespace std;

int name = 99;

namespace ns3
{
    struct person {
        char name[40];
        int age;
    };
    int grade;
    int add(int a, int b) 
    { 
        return a + b;
    };
}


namespace ns1
{
    int name;
}

namespace ns2
{
    int name;
} // namespace ns2

void f() {
    
}

namespace ns1
{
    int len;
}


int main(int argc, char const *argv[])
{
    
    ns1::name = 1;
    int name = 2;
    ns2::name = 3;
    ns1::len = 9;

    cout << name << " " << ns1::name << " " << ns2::name << endl;
    cout << ::name << endl;
    return 0;
}


void f2() {
    using namespace ns1;

    len = 10;

}


void f3() {
    using ns1::len;
    len = 9;
}

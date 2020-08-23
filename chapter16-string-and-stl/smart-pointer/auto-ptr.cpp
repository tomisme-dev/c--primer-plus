#include <memory>
#include <iostream>

using namespace std;

class A {
public:
    int val;
    ~A() {
        cout << "A destructor..." << endl;
    }
};


void test1() {
    auto_ptr<A> aPtr(new A);
}


void test2() {
    int a;
    {
        auto_ptr<A> aPtr(new A);
    }
    cout << "return test2" << endl;
}


void test3() {
    auto_ptr<A> aPtr(new A);
    throw logic_error("my error");
}


void test4() {

    A *aPtr = new A;
    aPtr->val = 8848;
    shared_ptr<A> aSPtr = (shared_ptr<A>)aPtr;
    cout << "val: " << aSPtr->val << endl;
}


void test5() {
    auto_ptr<A> aAPtr(new A);
    auto_ptr<A> a2Aptr;
    a2Aptr = aAPtr;
}

int main(int argc, char const *argv[])
{
    // unique_ptr<double> pd(new double);
    // auto_ptr<double> pd(new double);
    // *pd = 9.8;
    // cout << *pd << endl;
    // test2();
    try
    {
        test5();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }


    return 0;
}

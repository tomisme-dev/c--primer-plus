#include <memory>
#include <iostream>

using namespace std;

class A {
public:
    string val;
    A(const char * s) : val(s) {

    }
    A() {}
    ~A() {
        cout << "A destructor..." << endl;
    }
};

void test1() {
    unique_ptr<A> as[] ={
        unique_ptr<A>(new A("a")),
        unique_ptr<A>(new A("b")),
        unique_ptr<A>(new A("c")),
        unique_ptr<A>(new A("d")),
        unique_ptr<A>(new A("e")),
    };

    // shared_ptr<A> a2 = as[2];
    for (int i = 0; i < 5; i++) {
        cout << i << ": " << as[i]->val << endl;
    }
}


void test2() {
    shared_ptr<A> a1UPtr(new A("hello"));
    shared_ptr<A> a2UPtr;
    a2UPtr = a1UPtr;
}


unique_ptr<A> test3() {
    unique_ptr<A> result = unique_ptr<A>(new A("good"));
    return result;
}

void test4() {
    unique_ptr<A> a1 = unique_ptr<A>(new A("good"));
    unique_ptr<A> a2;
    a2 = move(a1);
}

void test5() {
    unique_ptr<A[]> a1(new A[10]);
    a1[0].val = "good";
}

int main(int argc, char const *argv[])
{
    // test2();
    // unique_ptr<A> aptr = test3();
    // cout << "after call test3" << endl;
    test5();

    return 0;
}

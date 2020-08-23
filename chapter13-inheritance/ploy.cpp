#include <iostream>
#include <cstdio>
using namespace std;

class SuperClass
{
private:
    /* data */
public:
    SuperClass(/* args */) {}
    virtual ~SuperClass() {
        cout << "destructor super..." << endl;
    }
    void show() {
        cout << "super class" << endl;
    }

    virtual void hello();
    virtual void saygood() {
        cout << "saygood super" << endl;
    }
};

void SuperClass::hello() {
    cout << "hello super" << endl;
}


class SubClass: public SuperClass
{
private:
    /* data */
public:
    SubClass(/* args */) {}
    ~SubClass() {
        cout << "destructor sub..." << endl;
    }
    void show();
    void hello();
    virtual void saygood() {
        cout << "saygood sub" << endl;
    }
};

void SubClass::show() {
    cout << "sub c" << endl;
}

void SubClass::hello() {
    cout << "hello sub" << endl;
}

class SubSubClass: public SubClass
{
public:
    SubSubClass(/* args */) {}
    ~SubSubClass() {
        cout << "destructor subsub..." << endl;
    }
};

typedef void (* hello_func)(SubClass &sub);

void print_obj(void *start, int size) {
    unsigned char * cstart = (unsigned char *)start;
    for(int i = 0; i < size; i++){
        printf("%2x ", cstart[i]);
    }
    cout << "=========================" << endl;
}

void other_hello(SubClass &sub) {
    cout << "other hello" << endl;
}


int main(int argc, char const *argv[])
{
    // cout << sizeof(SubClass) << endl;
    // SubClass sc;
    // sc.show();
    // sc.hello();
    // sc.saygood();

    // SuperClass & superc = sc;
    // superc.show();
    // superc.hello();
    // superc.saygood();
    // SuperClass *subClassPtr = new SubClass();
    // subClassPtr->hello();
    // delete subClassPtr;

    SubClass sub;
    SuperClass &sup = sub;

    SuperClass *ptr = &sub;
    hello_func **funs = (hello_func **)&sub;
    cout << *funs << ", " << **funs << ", " << *(*funs + 2) << endl;
    
    // (*funs)[2] = &other_hello;
    // (*funs)[2](sub);
    void *** modify = (void ***)ptr;
    cout << *funs << endl;

    char *c = new char;
    cout << "heap: " << (void *)c << endl;

    

    print_obj(ptr, sizeof(sub));
    print_obj(*funs, 32);
    print_obj(*(void **)ptr, 32);
    return 0;
}

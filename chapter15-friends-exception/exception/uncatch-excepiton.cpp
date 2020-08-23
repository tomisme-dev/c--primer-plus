#include <exception>
#include <iostream>

using namespace std;

void uncatch_exception_handler() {
    cerr << "uncatch_exception_handler" << endl;
    throw bad_exception();
}


void f() {
    throw "my error";
}
int main(int argc, char const *argv[])
{   
    set_terminate(uncatch_exception_handler);
    try
    {
        f();
    }
    catch(const std::bad_exception & e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}

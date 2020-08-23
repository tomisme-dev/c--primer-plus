#include <iostream>

void f() {
    std::cout << "f funciton" << std::endl;
}
int main(int argc, char const *argv[])
{
    using std::cout;
    using std::endl;

    f();
    cout << "hello" << endl;
    return 0;
}

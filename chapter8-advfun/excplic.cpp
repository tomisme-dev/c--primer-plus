#include <iostream>

using namespace std;

template <typename T>
void func(T &t) {
    cout << "func template" << endl;
}

template <>
void func<double>(double &d) {
    cout << "func double" << endl;
}

template <>
void func<int>(int &d) {
    cout << "func int" << endl;
}

void func(int &i) {
    cout << "func explic" << endl;
}




int main(int argc, char const *argv[])
{
    int a = 34;
    func(a);

    double d = 8.0;
    func(d);
    return 0;
}

#include <iostream>


template <typename T>
auto add(T t1, T t2) -> decltype(t1 + t2)
{
    return t1 + t2;
};

auto inc(int &a) -> int &
{
    a++;
    return a;
}

int main(int argc, char const *argv[])
{
    using namespace std;

    long sum = add(1L, 3L);

    cout << sum << endl;

    int a = 9;
    inc(a);
    cout << a << endl;
    return 0;
}

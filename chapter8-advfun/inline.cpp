#include <iostream>

inline int square(int x) {
    return x * x;
}


int show(int x) {
    int c = square(x);
    return c + 10;
}

int main(int argc, char const *argv[])
{
    square(8);
    return 0;
}

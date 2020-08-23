

typedef void (*f)(void);

void f2(f func) {
    func();
}

void print() {
    int x = 0;
    x++;
}
int main(int argc, char const *argv[])
{
    f2(print);
    return 0;
}



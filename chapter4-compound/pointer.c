#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 88;
    int *p;
    p = (int *)0x7ffea87180dc;
    printf("%p, %p\n", p, &a);
    return 0;
}

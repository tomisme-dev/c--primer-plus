#include <stdio.h>


struct person {
    char name[40];
    int age;
};

int main(int argc, char const *argv[])
{
    struct person p1 = {
        age: 12,
        name: "leborn",
    };

    printf("name: %s, age: %d\n", p1.name, p1.age);
    return 0;
}

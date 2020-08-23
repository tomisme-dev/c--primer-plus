
#include <stdio.h>

typedef struct person
{
    char sex[10000];
    int age;
} person;


person p(person p0) {
    person per = p0;
    per.age++;
    return per;
}

int main(int argc, char const *argv[])
{
    
    person p0 = {"00", 18};
    person pp = p(p0);
    printf("pp.age = %d\n", pp.age);
    return 0;
}




#include <iostream>
#include <cstdio>

using namespace std;

struct person {
    char name[40];
    int age;
};

int main(int argc, char const *argv[])
{
    int *ip = new int;
    *ip = 12;
    int a = 5;

    int &x = *(new int);
    x = 18;

    cout << &a << endl;
    cout << ip << " " << *ip << endl;
    cout << &x << " " << x << endl;

    int *arr = new int [12];
    arr[1] = 8;
    delete [] arr;

    delete &x;
    delete ip;
    delete ip;

    string s1 = "hello";
    string s2 = s1;
    cout << "s1==s2 " << (s1 == s2) << endl;

    void **p = (void **)(&s1);

    void **p2 = (void **)(&s2);

    printf("%p\n", &s2);

    printf("%p\n", &s1);

    person per1;
    printf("person: %p\n", &per1);


    person *per2 = new person;
    printf("person: %p\n", per2);
    *person = {"tom", 18};
    printf("person: %p, name=%s\n", per2, per2->name);

    return 0;
}

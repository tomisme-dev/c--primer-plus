#include <iostream>
#include <cstring>

using namespace std;

struct person {
    int age;
    char name[20];
};


int &gen_int();

person& gen_person() {
    person *p = new person;
    p->age = 12;
    strcpy(p->name, "tom");
    return *p;
}

person & clone(person &p0) {
    person *p = new person;
    *p = p0;
    return *p;
}

int main(int argc, char const *argv[])
{
    int &b = gen_int();
    cout << b << endl;
    cout << &b << endl;

    int c = gen_int();
    int d = c + 10;

    person p = gen_person();
    cout << p.name << endl;

    person p2 = {18, "jerry"};
    person &pc = clone(p2);
    cout << &p2 << "; " << &pc << endl;
    cout << pc.name << endl;
    return 0;
}


int& gen_int() {
    int *a = new int;
    *a = 12;
    cout << "a addr:" << a << endl;
    return *a;
} 
#include <iostream>
#include <cstring>

using namespace std;

struct data
{
    char name[30];
    mutable int age;
};

int main(int argc, char const *argv[])
{
    const data d = {"jerry", 20};

    // strcpy(d.name, "tom");
    d.age++;
    

    cout << "name: " << d.name << ", age: " << d.age << endl;
    return 0;
}

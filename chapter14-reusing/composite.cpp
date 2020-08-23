#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
    string name;
    explicit Person(const string &name): name(name)
    {
        cout << "constructor one arg" << endl;
    }

    Person()
    {
        cout << "constructor empty" << endl;
    }
};

class ClassRoom
{
public:
    Person person;
    explicit ClassRoom(const string & name)
    {
        this->person = Person(name);
    }

    // explicit ClassRoom(const string & name): person(name)
    // {
    // }
};


int main(int argc, char const *argv[])
{
    string name = "tom";
    // Person p(name);
    ClassRoom cr(name);
    return 0;
}


#include <iostream>
#include <string>

using namespace std;

class SuperClass
{
private:
    string name;

public:
    SuperClass(const string &name)
    {
        this->name = name;
    }
    void showName()
    {
        cout << "super showName: " << name << endl;
    }

    void showName(int age)
    {
        cout << "super showName age" << endl;
    }
};

class SubClass : public SuperClass
{
public:
    SubClass(const string &name) : SuperClass(name)
    {
    }
    void showName()
    {
        SuperClass::showName();
        cout << "sub showName" << endl;
    }
};

int main(int argc, char const *argv[])
{
    SubClass sub("tom");
    sub.showName();
    // sub.showName(12);
    return 0;
}

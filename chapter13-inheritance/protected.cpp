#include <iostream>

using namespace std;

class SuperClass
{
protected:
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

protected:
    void procted_method() {
        cout << "protected method...." << endl;
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
        cout << "sub showName:" << this->name << endl;
        this->procted_method();
    }
};

int main(int argc, char const *argv[])
{
    SubClass sub("tom");
    sub.showName();
    // sub.showName(12);
    return 0;
}

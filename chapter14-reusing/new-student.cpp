#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Student : private string, private valarray<double>
{
private:
    /* data */
public:
    Student(const string &name, int n) : string(name), valarray<double>(n)
    {
    }
    ~Student() {};
    void print()
    {
        valarray<double> &scores = *this;

        cout << (string &)*this << ", sum: " <<  scores.sum() << endl;
    }

    double & operator[](int i)
    {
        // valarray<double> * scores = this;
        // return (*scores)[i];
        return valarray<double>::operator[](i);
        
    }
};


int main(int argc, char const *argv[])
{
    Student s("tom", 2);
    s[0] = 5;
    s[1] = 6;
    s.print();
    cout << s[0] << endl;
    return 0;
}


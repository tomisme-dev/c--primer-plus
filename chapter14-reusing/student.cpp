#include <string>
#include <valarray>
#include <iostream>

using namespace std;

class Student
{
private:
    typedef valarray<double> ArrayScores;

    string name;
    ArrayScores scores;
    // output for score
    ostream &arrOut(ostream &out) const
    {
        out << "[";
        for (int i = 0; i < scores.size(); i++)
        {
            out << scores[i];
            if (i < scores.size() - 1)
            {
                out << ", ";
            }
        }
        out << "]";
        return out;
    }

public:
    Student() : name("Null Student"), scores(){};
    explicit Student(const string &name) : name(name), scores()
    {
    }

    explicit Student(int n) : name("Null Student"), scores(n){};

    Student(const string &name, int n) : name(name), scores(n)
    {
    }

    ~Student(){};

    double average() const
    {
        if (scores.size() <= 0)
        {
            return 0;
        }

        return scores.sum() / scores.size();
    }
    const string &getName()
    {
        return name;
    }

    double &operator[](int i)
    {
        return *(&scores[i]);
    }

    // friends
    friend istream &operator>>(istream &in, Student &stu)
    {
        return in;
    }

    friend istream &getline(istream &in, Student &std)
    {
        return in;
    }

    // output
    friend ostream &operator<<(ostream &out, const Student &stu)
    {
        out << stu.name << ": ";
        stu.arrOut(out);
        out << endl;
        return out;
    }

    // friend void mySay(Student &stu)
    // {
    //     cout << "my say " << stu.name << endl;
    // }

    friend void mySay(Student &stu);

};

void mySay(Student &stu)
{
    cout << "my say " << stu.name << endl;
}

int main(int argc, char const *argv[])
{
    Student stu("tom", 12);
    stu[0] = 32;
    cout << stu << endl;
    cout << stu.average() << endl;
    cout << &stu[0] << ", " << &stu[11] << ", size:" << sizeof(stu) << endl;
    mySay(stu);
    return 0;
}

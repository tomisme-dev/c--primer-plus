#include <iostream>

using namespace std;

template <typename Type, int n>
class ArrayTP
{
private:
    Type items[n];
public:
    Type & operator[](int i) {
        return items[i];
    }
};


template <typename T1, typename T2>
class Pair
{
private:
    T1 t1;
    T2 t2;
public:
    Pair(const T1 & t1, const T2 & t2) : t1(t1), t2(t2) {
        cout << "generic template..." << endl;
    }

    ~Pair() {};

    T1 getT1() const {
        return t1;
    }

    T2 getT2() const {
        return t2;
    }
};

void test_array() {
    ArrayTP<int, 10> is;
    is[9] = 18;
    cout << is[9] << endl;
}

template <typename T1, typename T2=int>
class DefaultType
{
public:
    T1 t1;
    T2 t2;
};

template <typename T1>
class Pair<T1, int>
{
public:
    Pair() {
        cout << "Pair<T1, int>" << endl;
    }

};




template <typename T>
T get(T t) {
    cout << "template method..." << endl;
    return t;
}

template <>
int get(int t) {
    cout << "specialization int..." << endl;
    return t;
}


int main(int argc, char const *argv[])
{
    // test_array();
    // string name = "tom";
    // Pair<string, int> person("tom", 18);
    // double i = person.getT1();
    // cout << person.getT1() << ", " << person.getT2() << endl;

    // DefaultType<double> d;
    // d.t1 = 3.14;
    // d.t2 = 9;

    // DefaultType<string, string> d2;
    // d2.t1 = "hello";
    // d2.t2 = "world";

    // cout << d2.t2 << endl;

    // get(12);
    // get(12L);

    Pair<long, int> p;




    return 0;
}

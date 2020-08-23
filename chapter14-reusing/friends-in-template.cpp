#include <iostream>

using namespace std;

template <typename T>
class A
{

public:
    T val;
    friend void show(A<T> & a) {
        cout << "frined show..." << " size:" << sizeof(val) << ", val: " << a.val << endl;
    }
};


// 1. 声明友元函数为模板函数
template <typename T> void report(T & t);

// 2. 在类中声明友元函数
template <typename TT>
class HasFriendT
{
public:
    TT val;
    friend void report<>(HasFriendT<TT> &); // 等价于 friend void report<HasFriendT<TT>>(HasFriendT<TT> &); 
};

// 3. 实现友元函数
template <typename T>
void report(T & hf)
{
	cout << "report: " << hf.val << endl;
}


int main(int argc, char const *argv[])
{
    A<int> ai;
    ai.val = 10;
    A<double> ad;
    ad.val = 3.14;

    show(ai);
    show(ad);

    HasFriendT<double> fri;
    fri.val = 5.12;
    report(fri);
    return 0;
}

#include <iostream>

using namespace std;


template <typename T>
class Outer
{
public:
    template <typename V>
    class Inner{
    public:
        V val;
        Inner(V & val): val(val) {
            
        }
    };

    Inner<T> holder;
    
    Outer(T & t): holder(t){

    }

    T get() {
        return holder.val;
    }
};


int main(int argc, char const *argv[])
{
    int i = 1688;
    Outer<int> o(i);
    cout << o.get() << endl;
    return 0;
}

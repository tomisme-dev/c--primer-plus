#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<double> gen_vector() {
    vector<double> ds(10);
    for (int i = 0; i < ds.size(); i++) {
        ds[i] = 2 * i + 1;
    }

    return ds;
}

void show(double d) {
    cout << d << endl;
}

void test1() {
    vector<double> ds = gen_vector();
    for_each(ds.begin(), ds.end(), show);
}

void test_random_shuffle() {
    vector<double> ds = gen_vector();
    random_shuffle(ds.begin(), ds.end());
    for_each(ds.begin(), ds.end(), show);
}

class A {
public:
    int val;
    A(int val): val(val) {}
    int operator<(A & a2) {
        return this->val < a2.val;
    }
};

void test_sort() {
    vector<double> ds = gen_vector();
    random_shuffle(ds.begin(), ds.end());
    sort(ds.begin(), ds.end());
    for_each(ds.begin(), ds.end(), show);
}


void showA(A & a) {
    cout << "a.val: " << a.val << endl;  
}
void test_sortA() {
    vector<A> as;
    as.push_back(A(8));
    as.push_back(A(5));
    as.push_back(A(9));

    sort(as.begin(), as.end());
    for_each(as.begin(), as.end(), showA);
}

int cmp_a(A & a1, A & a2) {
    return !(a1.val < a2.val);
}


void test_sortA2() {
    vector<A> as;
    as.push_back(A(8));
    as.push_back(A(5));
    as.push_back(A(9));

    sort(as.begin(), as.end(), cmp_a);
    for_each(as.begin(), as.end(), showA);
}


void test_range_for() {
    vector<double> ds = gen_vector();
    for(double d: ds) {
        cout << d << endl;
    }
}

void test2() {
    vector<double> ds(10);
    for (int i = 0; i < ds.size(); i++) {
        ds[i] = 2 * i + 1;
    }
    cout << "size: " << ds.size() << endl;

    // vector<double>::iterator it = ds.begin();
    auto be = ds.begin();
    ds.erase(be + 1, be + 3);
    ds.insert(ds.begin(), 8848);
    for (vector<double>::iterator it = ds.begin(); it != ds.end(); it++) {
        cout << *it << endl;
    }

    // ds.push_back();
    // ds.pop_back();
}



int main(int argc, char const *argv[])
{

    // test1();
    // test_random_shuffle();
    // test_sortA2();
    test_range_for();
    return 0;
}

#include <iterator>
#include <memory>
#include <iostream>
#include <vector>

using namespace std;


unique_ptr<int[]> generator(int n) {
    unsigned int seed = 45;
    rand_r(&seed);

    unique_ptr<int[]> is(new int[n]);

    for (int i = 0; i < n; i++) {
        is[i] = rand() % 100;
    }

    return is;
}


void test_ostream_iterator() {
    unique_ptr<int[]> is = generator(20);

    ostream_iterator<int> out_iter(cout, "\n");
    // copy(&is[0], &is[20], out_iter);

    int size = 5;
    int ids[size] ={ 8, 89, 4, 66, 99 };
    copy(ids, ids+size, out_iter);
}


void test_istream_iterator() {
    istream_iterator<int> in_iter_begin(cin);
    istream_iterator<int> in_iter_end;

    // int arr[3];
    vector<int> arr(3);

    copy(in_iter_begin, in_iter_end, arr.begin());

    cout << arr[2] << endl;
    
}

int main(int argc, char const *argv[])
{

    test_ostream_iterator();
    return 0;
}

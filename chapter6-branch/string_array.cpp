#include <iostream>
#include <array>


using namespace std;

// void showArray(array<int, sizeof(int)> arr) {
//     for(int i: arr) {
//         cout << arr[i] << endl;
//     }
// }

void showArray(array<int, sizeof(int)> &arr) {
    for(int i: arr) {
        cout << i << endl;
    }
}

void showArray(array<int, sizeof(int)> *arr) {
    for(int i: *arr) {
        cout << i << endl;
    }
}

int main(int argc, char const *argv[])
{
    // string a = "abc";
    // string d = "efghghefghghefghghefghghefghghefghghefghghefghgh";

    // cout << sizeof(a) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(string) << endl;
    
    array<int, sizeof(int)> a = {8, 88, 55, 666};
    cout << a.size() << endl;
    showArray(&a);
    return 0;
}

#include <iostream>
#include <algorithm>
#include <random>

using namespace std;

#define SIZE 10


void show(int arr[], int size);

int main(int argc, char const *argv[])
{
    unsigned int seed = 45;
    rand_r(&seed);

    int is[SIZE];

    for(int i = 0; i < SIZE; i++) {
        is[i] = rand() % 100;
    }

    int is2[SIZE];

    copy(is, is+SIZE, is2);

    vector<int> vs(SIZE);
    copy(is, is+SIZE, vs.begin());

    show(is, SIZE);

    sort(is, is+SIZE);
    
    show(is, SIZE);
    show(is2, SIZE);

    return 0;
}


void show(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}
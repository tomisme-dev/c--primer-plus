#include <stdio.h>




void sum(int arr[], int size) {
    int s = 0;
    for(int i = 0; i < size; i++) {
        s += arr[i];
    }

    printf("sum=%d\n", s);
}


int main(int argc, char const *argv[])
{
    int zippo[4][2] = { {2,4}, {6,8}, {1,3}, {5, 7} };

    int *ptr = (int[]){1, 2, 3};
    sum(ptr, 3);

    printf("zippo=%p\n", zippo);

    printf("zippo=%d\n", **(zippo+2));

    printf("zippo+2=%p\n", zippo+2);
    return 0;
}

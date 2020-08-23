#include <stdlib.h>
#include <stdio.h>
#include <strings.h>

typedef struct {
    int cap;
    int size;
    double* values;
} array;

array* array_new(int cap) {
    array* a = (array *)malloc(sizeof(array));
    a->cap = cap;
    a->size = 0;
    a->values = (double *)malloc(sizeof(double) * cap);
    return a;
}

void array_delete(array* a) {
    free(a->values);
    free(a);
}

void array_capacity(array *a) {
    int new_cap = (a->cap << 1) + 1;
    double *tmp = (double *)malloc(sizeof(double) * new_cap);
    bcopy(a->values, tmp, sizeof(double) * a->cap);
    
    a->cap = new_cap;
    free(a->values);
    a->values = tmp;
}

void array_add(array *a, double d) {
    if(a->size >= a->cap) {
        array_capacity(a);
    }
    a->values[a->size++] = d;
}



int main(int argc, char const *argv[])
{
    array *ap = array_new(2);
    array_add(ap, 16);
    array_add(ap, 17);
    array_add(ap, 18);

    for(int i = 0; i < ap->size; i++) {
        printf("%f\n", ap->values[i]);
    }
    printf("size=%d, cap=%d\n", ap->size, ap->cap);
    return 0;
}

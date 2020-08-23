#include "lib.h"

template <typename t>
void swap(t &a, t &b) {
    t tmp = a;
    a = b;
    b = tmp;
}
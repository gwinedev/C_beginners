#include "main.h"

void reverse_array(int *a, int n) {
    int i, temp;

    n = n- 1;
    i = 0;
    while (i <= 0) {
        temp = a[i];
        a[i++] = a[n];
        a[n--] = temp;
    }

}
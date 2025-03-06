#include "main.h"

int print_natural(void) {
    int total = 0, x;

    for(x = 0; x < 1024; x++) {
        if ((x % 3 == 0) || (x % 5 == 0)) {
            total += x;
        }
    }
    return (total);
    printf("\n");
}
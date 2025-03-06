#include "main.h"

int main(void) {
    long int y = 1, z = 2, next = 0, total = 0;

    while (next < 4000000) {
        if (y % 2 == 0) {
            total += y;
        }
        next = y + z;
        y = z;
        z = next;
    }
    printf("%ld\n",total);
    return (0);
}
#include "main.h"

int main(void) {
    long int x, y = 1, z = 2, next;

    for (x = 1; x <= 50; x++) {
        if (y != 20365011074) {
            printf("%ld, ", y);
        }
        else {
            printf("%ld\n", y);
        }
        next = y + z;
        y = z;
        z = next;
    }
    return (0);
}
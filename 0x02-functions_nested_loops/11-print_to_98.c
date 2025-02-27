#include "main.h"

void print_to_98(int n) {
    int x, y;

    if (n >= 98) {
        for (x = n; x >= 98; x--) {
            if (x != 98){
                printf("%d,", x);
            }
            else
                printf("%d", x);
        }
    }
    else if (n <= 98) {
        for (y = n; y <= 98; y++) {
            if (y != 98) 
                printf("%d, ", y);
            else
                printf("%d", y);
        }
    }
    printf("\n");
}
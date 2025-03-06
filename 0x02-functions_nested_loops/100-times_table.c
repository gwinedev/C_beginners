#include "main.h"

void print_times_table(int n) {
    int x, y, z;

    if (n <= 15 && n >= 0) {
        for (x = 0; x <= n; x++) {
            for (y = 0; y <= n; y++) {
               z = x * y;
               if (y == 0) {
                /*Deal with the first digits*/
                printf("%d", z);
               }
               else if (z < 10 && y != 0) {
                /*Deal with other single digits*/
                printf(",   %d", z);
               }
               else if (z >= 10 && z < 100) {
                /*Deal with double digits*/
                printf(",  %d", z);
               }
               else {
                printf(", %d", z);
               }
            }
            printf("\n");
        }
    }
}
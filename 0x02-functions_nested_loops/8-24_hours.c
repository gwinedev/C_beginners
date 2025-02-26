#include "main.h"

void jack_bauer(void) {
    int h,m;

    for(h = 0; h <= 5; h++) {
        for (m = 0; m <= 9; m++) {
            _putchar('0');
            _putchar('0');
            _putchar(':');
            _putchar('0' + h);
            _putchar('0' + m);
            _putchar('\n');
        }
    }
}
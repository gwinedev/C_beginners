#include "main.h"

void times_table(void) {
    int  a, b, c;

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            c = a * b;
            if (b == 0) {
                _putchar('0' + c);
            }
            if (c < 10 && b != 0) {
                _putchar(',');
                _putchar(' ');
                _putchar(' ');
                _putchar('0' + c);
            }
            else if (c >= 10) {
                _putchar(',');
                _putchar(' ');
                _putchar('0' + (c / 10));
                _putchar('0' + (c % 10));
            }
        }
        _putchar('\n');
    }
}
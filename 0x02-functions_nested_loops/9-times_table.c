#include "main.h"

void times_table(void) {
    int a, b, c;

    for (a = 0; a < 10; a++) {
        for (b = 0; b < 10; b++) {
            c = a * b;
            if (c < 10) {
                _putchar('0' + c);
                _putchar(',');
                _putchar(' ');
            }
            else {
                _putchar((c / 10) + '0');
                _putchar((c % 10) + '0');
                _putchar(',');
                _putchar(' ');
            }
        }
        _putchar('\n');
    }
}
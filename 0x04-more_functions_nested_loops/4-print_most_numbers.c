#include "main.h"

void print_most_numbers(void) {
    int x = 0;

    while(x < 10) {
        if (x != 2 && x != 4) {
            _putchar('0' + x);
        }
        x++;
    }
    _putchar('\n');
}
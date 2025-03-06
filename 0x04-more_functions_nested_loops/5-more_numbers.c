#include "main.h"

void more_numbers(void) {
    int x, j;

    for(j = 0; j < 10; j++) {
        for (x = 0; x < 15; x++) {
            if (x >= 10) {
                _putchar(x / 10 + '0');
            }
            _putchar(x % 10 + '0');
        }
        _putchar('\n');
    }
    _putchar('\n');
}
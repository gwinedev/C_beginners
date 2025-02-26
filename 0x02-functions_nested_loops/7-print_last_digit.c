#include "main.h"

int print_last_digit(int c) {
    int mod;

    mod = c % 10;
    if (c < 0)
        mod = -(mod);
    _putchar('0' + mod);
    return (mod);
}
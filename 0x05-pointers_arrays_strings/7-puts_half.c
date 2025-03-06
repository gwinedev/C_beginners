#include "main.h"

void puts_half(char *str) {
    int n, length = 0, i;

    while (str[length] != '\0')
        length++;

    n = (length - 1) / 2;

    for (i = n + 1; i < length; i++) {
        _putchar(str[i]);
    }
    if (n % 2 != 0)
        _putchar(str[n]);
    _putchar('\n');
}
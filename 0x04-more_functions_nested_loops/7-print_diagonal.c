#include "main.h"

void print_diagonal(int n) {
    int i, gap;

    for (i = 1; i <= n; i++ ) {
        for (gap = 0; gap < i; gap++)
            _putchar(' ');
        _putchar('\\');
        _putchar('\n');
    }
    if (n <= 0)
        _putchar('\n');
    _putchar('\n');
}
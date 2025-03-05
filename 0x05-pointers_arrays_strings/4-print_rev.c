#include "main.h"

void print_rev(char *s) {
    int length = 0;

    while(s[length] != '\0') {
        length++;
    }

    length--; /*Bring it back to the last character*/
    while(length >= 0) {
        _putchar(s[length - 1]);
        length--;
    }
    _putchar('\n');
}
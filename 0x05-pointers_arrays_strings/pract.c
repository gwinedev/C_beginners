#include <stdio.h>

int main(void) {
    char *s = "abcdefghijklmnopqrstuvwxyz";
    int length = 0, i;

    while (s[length] != '\0')
        length++;

    for (i = 0; i < length; i++) {
        if (i % 2 == 0) {
            putchar(s[i]);
            putchar(' ');
        }
    }
    putchar('\n');
    return (0);
}
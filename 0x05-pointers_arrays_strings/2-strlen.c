#include <stdio.h>

int _strlen(char *s) {
    int i = 1;

    while (s[i])
        i++;
    return (i);
}
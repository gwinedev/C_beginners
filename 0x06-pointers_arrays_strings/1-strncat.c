#include "main.h"

char *_strncat(char *dest, char *src, int n) {

    int length = 0, i;

    while (dest[length] != '\0')
        length++;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[length] = src[i];
        length++;
    }
    dest[length] = '\0';
    return (dest);
}
#include "main.h"

char *_strcat(char *dest, char *src) {
    int length = 0, i;

    while (dest[length] != '\0')
        length++;

    for (i = 0; src[i] != '\0'; i++) {
        dest[length] = src[i];
        length++;
    }
    dest[length] = '\0';
    return (dest);
}
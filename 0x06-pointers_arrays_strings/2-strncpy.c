#include "main.h"

char *_strncpy(char *dest, char *src, int n) {
    int i;

    for (i = 0; src[i] != '\0' && i < n; i++) {
        dest[i] = src[i];
    }
    /*If you reach the end of src before copying n letters, fill the rest of dest with \0*/
    for (; i < n; i++)
        dest[i] = '\0';
    return (dest);
}
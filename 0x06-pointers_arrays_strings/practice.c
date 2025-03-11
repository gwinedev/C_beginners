#include <stdio.h>

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

int main() {

    char str1[98] = "Junior ";
    char str2[] = "Senior";
    char *ptr;

    printf("%s\n", str1);
    printf("%s\n", str2);

    ptr = _strncat(str1, str2, 8);

    printf("%s\n", ptr);

    return (0);
}
#include <stdio.h>

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

int main() {

    char str1[98] = "Junior";
    char str2[] = "Senior";
    char *ptr;

    printf("%s\n", str1);
    printf("%s\n", str2);

    ptr = _strcat(str1, str2);

    printf("%s\n", ptr);

    return (0);
}
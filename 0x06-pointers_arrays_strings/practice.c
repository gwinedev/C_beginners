#include <stdio.h>

/*
char *_strncpy(char *dest, char *src, int n) {
    int i;
    
    for (i = 0; i < n && src[i] != '\0'; i++) {
        dest[i + n - 1] = src[i];
    }
    dest[i + n - 1] = '\0';
    return (dest);
}

int main() {

    char str2[] = "Senior";
    char *ptr;

    printf("Str2 before = %s\n", str2);
    ptr = _strncpy(str2, "This is it", 10);

    printf("Str2 after = %s\n", str2);
    printf("Str2 from ptr = %s\n", ptr);

    return (0);
}
    */

    int main() {

        char *src = "Okoeguale"; /*Copy this into dest after n*/
        char dest[50] = "Godwin";  /*Start accepting from after n*/
        char *ptr;
        int i, n = 6;

        for (i = 0; src[i] != '\0'; i++) {
            dest[n + i] = src[i];
        }
        dest[n + i] = '\0';
        printf ("\n\n%s\n",dest);
        return (0);
    }
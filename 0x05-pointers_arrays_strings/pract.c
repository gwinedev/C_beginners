#include <stdio.h>

void rev_string(char *string) {
    int i, l1 = 0, l2 = 0;
    char temp;

    while (string[l1] != '\0')
        l1++;

    l2 = l1 - 1;
    for (i = 0; i < l1 / 2; i++) {
        temp = string[i];
        string[i] = string[l2];
        string[l2--] = temp;
    }
}

int main(void) {
    char string[10] = "Godwin";
    printf("String before reverse: %s\n", string);
    rev_string(string);
    printf("Reversed string: %s\n", string);
    return (0);
}
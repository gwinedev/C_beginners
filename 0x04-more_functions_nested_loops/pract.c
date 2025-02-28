#include <stdio.h>

int main(int c) {
    char letter;

    letter = '0' + c;
    printf("%d", letter);
    if (letter >= 65 && letter <= 90)
        return (1);
    else
        return (0);

}
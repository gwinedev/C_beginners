#include <stdio.h>

int _isupper(int c) {
    char letter;

    letter = c;
    if (letter >= 65 && letter <= 90)
        return (1);
    else
        return (0);

}
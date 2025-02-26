#include "main.h"
void print_alphabet_x10(void) {
    int num;
    char letter;

    for(num = 0; num < 10; num++) {
        letter = 'a';
        while(letter <= 'z')
        {
            _putchar(letter);
            letter++;
        }
    }
}
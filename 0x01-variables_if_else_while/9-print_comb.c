#include <stdio.h>

int main(void) {
    char num;

    for(num = '0'; num <= '9'; num++)
    {
        putchar(num);
        if (num == '9')
            putchar('\n');
        else {
            putchar(',');
            putchar(' ');
        }
    }
    return (0);
}
#include <stdio.h>

int main(void) {
    char num = '1', alp;

        for(alp = 'a'; alp <= 'f'; alp++)
        {
            putchar(alp);
            putchar(num);
            num++;
        }
    return (0);
}
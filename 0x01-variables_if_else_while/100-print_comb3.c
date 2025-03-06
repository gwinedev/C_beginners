#include <stdio.h>

int main(void) {
    int num = 0, num1;

    while(num < 10) {
        for(num1 = 0; num1 < 10; num1++) {
            if(num1 != num && num < num1)
            {
                putchar(48 + num);
                putchar(48 + num1);
                if(num + num1 != 17) {
                    putchar(',');
                    putchar(' ');
                }
            }
        }
        num++;
    }
    putchar('\n');
    return (0);
}
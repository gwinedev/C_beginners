#include <stdio.h>

int main(void) {
    int num = 0, num1, num2;

    while(num < 10) {
        for(num1 = 0; num1 < 10; num1++) {
            for(num2 = 0; num2 < 10; num2++) {
                if(num != num1 && num < num1 && num1 != num2 && num1 < num2) {
                    putchar('0' + num);
                    putchar('0' + num1);
                    putchar('0' + num2);
                    if(num + num1 + num2 != 24) {
                        putchar(',');
                        putchar(' ');
                    }
                }
            }
        }
        num++;
    }
    putchar('\n');
    return (0);
}
#include <stdio.h>

int main(void) {
    int num;

    for (num  = 1; num <= 100; num++) {
        if ((num % 3 == 0) && (num % 5 == 0))
            printf("FizzBuzz ");
        else if (num % 5 == 0)
            printf("Buzz ");
        else if (num % 3 == 0)
            printf("Fizz ");
        else
            printf("%d ", num);
    }
    printf("\n ");
    return (0);
}
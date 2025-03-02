#include <stdio.h>

void modify(int m) {
    m = 123;
}

int main(void) {
    int n;

    n = 98;
    printf("%d ", n);
    modify(n);

    printf("%d", n);
    return (0);
}
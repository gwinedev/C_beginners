#include <stdio.h>
#include <string.h>

#define CORRECT_PASSWORD "secret007"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return (1);
    }
    if (strcmp(argv[1], CORRECT_PASSWORD) == 0) {
        printf("Tada! Congrats\n");
        return (0);
    }
    else {
        printf("Wrong password\n");
        return (0);
    }
}
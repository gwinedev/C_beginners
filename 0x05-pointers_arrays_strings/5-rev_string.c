#include "main.h"

void rev_string(char *s) {
    int i, length = 0, length1 = 0;
    char temp;

    while(s[length] != '\0') {
        length++;
    }
    
    length1 = length - 1;

    for (i = 0; i < length / 2; i++) {
        /*Store the first in a temp*/
        temp = s[i];
        /*store the first with the last*/
        s[i] = s[length1];
        /*store the temp(which was the first) in the last*/
        /*length1-- assigns before decreasing*/
        s[length1--] = temp;
    }
}
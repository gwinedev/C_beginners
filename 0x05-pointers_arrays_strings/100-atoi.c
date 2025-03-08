#include "main.h"

int _atoi(char *s) {
    int i = 0; /*Position in the string*/
    int sign = 1; /*Sign of the number (default is positive)*/
    int num = 0; /*The final number we are building*/

    /*skip non-numeric characters until we find '-' or '+'*/
    while(s[i] && (s[i] < '0' || s[i] > '9')) {
        if(s[i] == '-')
            sign = -sign; /*flip the sign each time we see '-*/
        i++;
    }
    /*Convert the digits into integers*/
    while (s[i] >= '0' && s[i] <= '9' ) {
        /*Multiply the current numbeer by 10 and add the new digit*/
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return (num * sign);
}
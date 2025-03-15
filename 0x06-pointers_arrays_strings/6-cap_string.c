#include "main.h"

char *cap_string(char *s) {
    int i = 0;

    while (s[i] != '\0') {
        if (s[0] > 'a' && s[0] < 'z') {
            s[0] = s[0] - 32;
        }
        if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'
            || s[i] == ',' || s[i] == ';' || s[i] == '.'
            || s[i] == '!' || s[i] == '?' || s[i] == '{'
            || s[i] == '{') {
            if (s[i + 1] >= 97 && s[i + 1] <= 122) {
                    s[i + 1] = s[i + 1] - 32;
            }
        }
        i++;
    }
    return (s);
}
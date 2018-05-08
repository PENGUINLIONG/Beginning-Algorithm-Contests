// File: uva1586-penguinliong.c
// Author: PENGUINLIONG
#include <stdio.h>
#include <string.h>

inline int is_digit(char c) {
    return c >= '0' && c <= '9';
}
inline float aggregate(char symbol, int count) {
    switch (symbol) {
        case 'C': return 12.01 * count;
        case 'N': return 14.01 * count;
        case 'H': return 1.008 * count;
        case 'O': return 16. * count;
        default: return -1.;
    }
}

int main() {
    char str[80];
    while (gets(str)) { // `gets()` is deprecated since C11.
        int count = 0, lg = 1;
        float output = 0.;
        int len = strlen(str);
        while (len--) {
            char c = str[len];
            if (is_digit(c)) {
                count += lg * (c - '0');
                lg *= 10;
            } else {
                if (count < 1) {
                    count = 1;
                }
                float aggr = aggregate(c, count);
                if (aggr < 0.) {
                    goto end;
                }
                output += aggr;
                count = 0, lg = 1;
            }
        }
        if (output >= 0.01) {
            printf("%f\n", output);
        }
    end:
    ;
    }
}

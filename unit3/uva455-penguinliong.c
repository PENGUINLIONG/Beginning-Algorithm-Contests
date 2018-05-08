// File: uva455-penguinliong.c
// Author: PENGUINLIONG
#include <stdio.h>
#include <string.h>

inline int eq(const char* str, size_t wnd_size, size_t repeat) {
    while (repeat--) {
        const char* wnd = str + repeat * wnd_size;
        size_t i = wnd_size;
        while (i--) {
            if (str[i] != wnd[i]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    char str[80];
    while (gets(str)) {
        size_t len, wnd_size;
        if ((len = strlen(str)) < 2) {
            continue;
        }
        char *pos = str + 1; // Prevent division by 0.
        while (len != (wnd_size = pos - str)) {
            // The character should be repeating the first.
            if (*str != *pos) {
                goto next;
            }
            size_t repeat = len / wnd_size;
            // The total length should be a multiple of the section.
            // Note that the result of division, both the remainder and the
            // quotient will be stored in registers. There is no extra cost
            // doing integral division twice.
            if (0 == len % wnd_size && eq(str, wnd_size, repeat)) {
                break;
            }
        next:
            ++pos;
        }
        if (len != wnd_size) {
            printf("%d\n", wnd_size);
        }
    }
    return 0;
}

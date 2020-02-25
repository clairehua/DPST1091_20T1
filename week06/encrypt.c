#include <stdio.h>

#define SHIFT 1

int main(void) {
    int c;

    c = getchar();
    while (c != EOF) {

        // rotate letters one position higher in alphabet
        // a =>, b => c ... y => z, z => a

        // what are the cases?
        // lowercase a - y
        if (c >= 'a' && c < 'z') {
            c = c + SHIFT;
        }
        // lowercase z
        else if (c == 'z') {
            c = 'a';
        }
        // upper case a-y
        else if (c >= 'A' && c < 'Z') {
            c = c + 1;
        }
        // uppercase z
        else if (c == 'Z') {
            c = 'A';
        }


        putchar(c);
        c = getchar();
    }
    return 0;
}
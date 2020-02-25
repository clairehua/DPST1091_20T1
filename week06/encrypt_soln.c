#include <stdio.h>

int main(void) {
    int c;

    c = getchar();
    while (c != EOF) {

        // rotate letters one position higher in alphabet
        // a =>, b => c ... y => z, z => a

        if (c >= 'A' && c < 'Z') {
            c = c + 1;
        } else if (c == 'Z') {
            c = 'A';
        } else if (c >= 'a' && c < 'z') {
            c = c + 1;
        } else if (c == 'z') {
            c = 'a';
        }

        putchar(c);
        c = getchar();
    }
    return 0;
}
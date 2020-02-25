// Takes inpout and prints it all out in CAPS
#include <stdio.h>

int main(void) {
    int c;

    // getchar returns an int which will contain either
    // the ASCII code of the character read or EOF

    c = getchar();
    while (c != EOF) {

        // Change to upper (if required)
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
        
        // print new character
        putchar(c);
        // update c??
        c = getchar();
    }
    
    return 0;
}
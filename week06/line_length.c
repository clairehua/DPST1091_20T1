// takes in input and prints how many characters in string

#include <stdio.h>

#define MAX_CHAR 4096


int main (void) {
    char str[MAX_CHAR];

    while (fgets(str, MAX_CHAR, stdin) != NULL) {
        int i = 0;
        while (str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        printf("line %d characters long\n", i);
    }

    
    return 0;
}
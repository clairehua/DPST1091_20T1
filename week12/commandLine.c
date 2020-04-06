#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define FACTOR 13

// also char **argv
// char * - is a pointer to a char (aka a string aka an array)
// (char *)* -> an array of char * -> array of strings
int main (int argc, char *argv[]) {

    // some error checking
    // assert checks if something is true otherwise it kind crashes
    // assert(argc == 3);
    if (argc != 3) {
        printf("Usage: ./a.out start finish\n");
        return EXIT_FAILURE;
    }

    int start, finish;
    start = atoi(argv[1]); 
    finish = atoi(argv[2]);

    while (start < finish) {
        // if no remainders, i.e. factor
        if (start % 13 == 0) {
            printf("%d\n", start);
        }
        start++;
    }

    return 0;
}
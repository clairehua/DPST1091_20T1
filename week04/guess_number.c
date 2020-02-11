// let a user guesses a random number 1..100 inclusive .

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

int main(void) {
    int guess;

    // seed pseudo-random number generator with current time
    srand(time(NULL));

    // rand() returns a  pseudo-random number

    int random_number = 1 + rand() % MAX;
    int min = 1;
    int max = MAX;

    // set guess to an impossible value so loop will be entered

    guess = -1;
    // TODO:
    // keep checking guesses
        printf("Random number is between %d and %d.\n", min, max);
        printf("Enter your guess: ");

        // scan in guess
        // we should check the scan succeeds here
        scanf("%d", &guess);

        // change min and max
    

    printf("\n_yay, you guessed the number %d correctly!\n\n", guess);

    return 0;
}
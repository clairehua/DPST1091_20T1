#include <stdio.h>

#define NUM_TIMES 10

void printMessage(int n);

int main (void) {

    printMessage(NUM_TIMES);

    return 0;
}






// //Iterative - using a loop
// void printMessage(int n){
//     int i = 0;
//     while (i < n) {
//         printf("Papa can you hear me?\n");
//         i++;
//     }

// }


//Recursive
// n is how many times i want to print message (lines left)
void printMessage(int n) {
    // base case
    if (n != 0) {
        // this means there is still lines to print (n > 0)
        printf("Papa can you hear me?\n");
        printf("There are %d lines left\n", n-1);
        printMessage(n-1);
    }
    // return
}
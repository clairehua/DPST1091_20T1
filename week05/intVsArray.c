// Code to show how ints and arrays work differently
// when passed into functions (pointer)
// Week 5 Tutorial


#include <stdio.h>


void print_array(int n, int array[n]);
void doSomeMaths(int n, int size, int array[n]);


int main(void) {
    int number = 5;
    int array[5] = {0, 1, 2, 3, 4};

    printf("number is: %d\nand array is: ", number);
    print_array(5, array);

    printf("Doing some maths ... \n\n");
    doSomeMaths(number, 5, array);


    printf("number is: %d\nand array is: ", number);
    print_array(5, array);
    return 0;
}


void doSomeMaths(int n, int size, int array[n]) {
    n++;
    int i = 0;
    while (i < size) {
        array[i] = array[i] + 1;
        // array[i]++;
        i++;
    }
    return;
}













































void print_array(int n, int array[n]) {
    int i = 0;
    printf("[");
    while (i < n) {
        printf("%d", array[i]);
        if ((i + 1) != n) {
            printf(", ");
        }
        i++;
    }
    printf("]\n");
    return;
}
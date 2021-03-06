// DPST1091 Q9 Week 4 Tutorial
#include <stdio.h>
#include <stdlib.h>

#define MAX 45

// Note this will overflow for large n over 44
long long factorial(int n);

int main(void) {
    int num;
    printf("Welcome to Factorial Calculator\n");
    printf("Enter a positive integer less than %d: ", MAX);
    
    scanf("%d", &num);

    // check valid number (hints: scanf check? )
    if (num > 0 && num < MAX){
        //long long fact = factorial(num);
        printf("%d! is %lld\n", num, factorial(num));        
        return EXIT_SUCCESS;
    } else {
        printf("Invalid input\n");
        return EXIT_FAILURE;
    }
}

//Note this will overflow for large n over 44
long long factorial(int n){
    long long fact = 1;
    int i = 1;
    while (i <= n) {
        fact = fact * i;
        i++;
    }
    return fact;
}






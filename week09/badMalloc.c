#include <stdio.h>
#include <stdlib.h>



int *sumFunction(int a, int b) {
    int *sum = malloc(sizeof(int));
    
    // error 
    if (sum == NULL) { 
        printf("error occured: not enough memory left\n");
        exit(7);
    }
    *sum = a + b;
    return sum;
}

int main(void) {

    int a = 1, b = 2;
    
    int *num = sumFunction(a, b);
    
    printf("%d\n", *num);
    free(num);
    // do whatever 
    return 0;
}

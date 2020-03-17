#include <stdio.h>
#include <stdlib.h>


int main(void) {

    //int *num1 = malloc(sizeof(int));
    
    int a = 0;
    //int b = 1;
    // integer pointer (points to 4 bytes)
    int *pointer = &a;
    // char * (look at the first byte)
    printf("the address is %p and the number stored there is %d\n", pointer, *pointer);
    
    return 0;
}

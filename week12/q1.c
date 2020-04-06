#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void){
    f();
    return EXIT_SUCCESS;
}

void f(void){
   printf("*");
   f();
}
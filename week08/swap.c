#include <stdio.h>
#include <stdlib.h>

void swap (int *a, int *b);

int main(void){
    int x = 10;
    int y = 99;
    
    printf("%d %d\n",x,y);
    
    swap(&x, &y);
    
    printf("%d %d\n",x,y);
    

    return EXIT_SUCCESS;
}

void swap (int *a, int *b){
   int tmp;
   tmp = *a;
   *a = *b;
   *b = tmp;
}

#include <stdio.h>

int main (void) {


    // // Q1
    // int x = -9;
    // int *p1 = &x;
    // int *p2;

    // p2 = p1;
    // printf("%d\n", *p2);
    // *p2 = 10;
    // printf("%d\n",x);


    // Q2
    // int x = -9;
    // int y = 0;

    // while (x != 0){
    //     y = y - 1;
    //     x = x + 1;
    // }

    // printf("%d\n", x);
    // printf("%d\n",y);

    // Q3
    int i = -7;
    int j = 0;

    while (i != 0){
        j = j - i;
        i = i + 1;
    }

    printf("%d\n", i);
    printf("%d\n",j);


    return 0;
}
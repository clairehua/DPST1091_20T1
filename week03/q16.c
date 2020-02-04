// print a rectangle

#include <stdio.h>

int main(void) {
    int height, length;
    int row, column;

    // Obtain input
    printf("Enter rectangle height and length: ");
    scanf("%d %d", &height, &length);

    row = 1;
    while (row <= height) {
        column = 1;
        while (column <= length) {
            if (row == 1 || row == height) {
                printf("*");
            } else if (column == 1 || column == length) {
                 printf("*");               
            }
            else {
                printf(" ");
            }
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}

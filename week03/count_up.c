// Q6 W3 Tutorial Questions
// reads an integer n and then prints the integers 1..n, one per line

#include <stdio.h>

int main(void) {
    int start = 1;
    int end;

    printf("Enter finish: ");
    scanf("%d", &end);

    while (start <= end) {
        printf("%d\n", start);
        start = start + 1;
        // start++; start--;
        // start += 1;
    }


    return 0;
}

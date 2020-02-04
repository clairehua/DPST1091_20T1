// Q6 W3 Tutorial Questions
// reads integers n and m and then prints the integers n..m, one per line

#include <stdio.h>

int main(void) {
    int start;
    int end;

    printf("Enter start: ");
    scanf("%d", &start);
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

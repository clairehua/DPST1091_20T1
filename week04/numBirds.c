// comment


#include <stdio.h>


// function prototype
void printBird(int birds, int kangaroo);


int main(void) {

    int numBirds, numKang;
    
    printf("How many birds and kangaroos do you want? ");
    scanf("%d%d", &numBirds, &numKang);
    
    printBird(numBirds, numKang);
    
    
    return 0;
}

void printBird(int birds, int kangaroo) {
    int i = 0;
    while (i < birds) {
        printf("  ___\n");
        printf(" ('v')\n");
        printf("((___))\n");
        printf(" ^   ^\n");
        i++;
    }
    i = 0;
    while (i < kangaroo) {
        printf("\n");
        printf("  /\\   ___\n");
        printf(" <__\\_/    \\\n");
        printf("    \\_  /  _\\\n");
        printf("      \\_\\ / \\\\\n");
        printf("        //   \\\\\n");
        printf("      =//     \\==\n");
        printf("\n");
        i++;
    }
    return;
}












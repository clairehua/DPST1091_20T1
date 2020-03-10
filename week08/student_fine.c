#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 1024

int main(int argc, char *argv[]) {
    char line[MAX_LINE];
    int fine;
    int biggestFine = 0;
    char biggestFineStudentName[MAX_LINE];
    char biggestFineReason[MAX_LINE];
    int nStudents;
    char *p, *q;

    nStudents = 0;
    while (fgets(line, MAX_LINE, stdin) != NULL) {

        // look for '$' to find the fine amount
        p = strchr(line, '$');
        if (p == NULL) {
            fprintf(stdout, "No $ on line %d\n", nStudents + 1);
            exit(1);
        }
        fine = atoi(&p[1]);


        // if it's the first student or fine is bigger than current maximum,
        // then we need to update our 'biggestFine'
        if (nStudents == 0 || fine > biggestFine) {
            biggestFine = fine;

            // put '\0' after the name, so that we can use strcpy
            p = p - 7; // move the pointer back so that it's immediately after the name
            //printf("%p\n",p);
			//printf("%c %p",p[0],&p[0]);
			if (p < line) {
                fprintf(stderr, "No name for fine on line %d\n", nStudents + 1);
            }
            p[0] = '\0';
            strcpy(biggestFineStudentName, line);

            // move forward 3 words
            int i;

            i = 0;
            while (i < 3) {
                p = strchr(&p[1], ' ');
                if (p == NULL) {
                    fprintf(stdout, "No reason for fine on line %d\n", nStudents + 1);
                    exit(EXIT_FAILURE);
                }
                i = i + 1;
            }

            // put '\0' after the reason, so that we can use strcpy
            q = strchr(&p[1], '.');
            if (q == NULL) {
                fprintf(stdout, "Line %d too long\n", nStudents + 1);
                exit(1);
            }
            q[0] = '\0';
            strcpy(biggestFineReason, p + 1);
        }
        nStudents = nStudents + 1;
    }
    if (nStudents > 0) {
        printf("Biggest fine was $%d given to %s for '%s'.\n", biggestFine, biggestFineStudentName, biggestFineReason);
    }

    return EXIT_SUCCESS;
}
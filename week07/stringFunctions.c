// Implementation of functions that work with strings
// DPST1091 Tuesday 10am Tutorial


#include <stdio.h>


#define MAX_LINE_LENGTH 100
#define N_LINES 10

void printStrings(char text[][MAX_LINE_LENGTH], int size);
int readStrings(char text[][MAX_LINE_LENGTH],int max);
void printIfLonger(char text[][MAX_LINE_LENGTH], int arraySize, int numChars);

int notInLinesArray(char lines[N_LINES][MAX_LINE_LENGTH], int n, 
                                                   char string[]);

int hasDuplicates(char lines[N_LINES][MAX_LINE_LENGTH], int n);




int main(void) {
    //char lotr[][MAX_LINE_LENGTH]  =  {"Frodo", "Gandalf", "Gimli", 
                                             //  "Elrond", "Aragorn"};
    // set enough memory for this array of strings
    char text[N_LINES][MAX_LINE_LENGTH];
    // numStrings is equal to the number of strings read in
    int numStrings = readStrings(text, N_LINES);
    printStrings(text, numStrings);
    return 0;
}


// print out the content of an array of strings
void printStrings(char text[][MAX_LINE_LENGTH], int size) {
    int i = 0;
    while (i < size) {
        printf("%s", text[i]);
        i++;
    }

}

int readStrings(char text[][MAX_LINE_LENGTH], int max) {
    int i = 0;
    while (i < max && fgets(text[i], MAX_LINE_LENGTH, stdin) != NULL) {
        i++;
    }
    return i;
}

//text - the array of strings
//arraySize - the number of strings in the array
//numChars - print out any strings in the array with more than this number 
//of characters
void printIfLonger(char text[][MAX_LINE_LENGTH], int arraySize, int numChars) {

}

int notInLinesArray(char lines[N_LINES][MAX_LINE_LENGTH], int n, char string[]) {
    return 0;
}

int hasDuplicates(char lines[N_LINES][MAX_LINE_LENGTH], int n) {
    return 0;
}

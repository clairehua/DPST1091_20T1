// Read  SIZE x SIZE numbers and test if
// they form a magic square http://en.wikipedia.org/wiki/Magic_square
//
//
// Andrew Taylor - andrewt@cse.unsw.edu.au
// 10/4/13

/*
//  Lo Shu Square
// 4  9  2
// 3  5  7
// 8  1  6
//
// Magic square of primes
//  17  89  71
// 113  59   5
//  47  29 101
*/

#include <stdio.h>

#define SIZE 3

void readSquare(int square[SIZE][SIZE]);
void printSquare(int square[SIZE][SIZE]);
int sumFirstRow(int square[SIZE][SIZE]);
int checkMagic(int square[SIZE][SIZE], int magicValue);

int main(void) {
    int square[SIZE][SIZE];
    int row,col;
    int magicValue;
    int isMagic = 1;
    
    // read potential magic square
    printf("Enter %d numbers please:\n", SIZE*SIZE);
    readSquare(square);
    
    // print potential magic square
    printf("Numbers are:\n");
    printSquare(square);
    
    // Find magic value
    magicValue = sumFirstRow(square);
    
    
    isMagic = checkMagic(square,magicValue);
   
    
    if(isMagic == 1){
        printf("It is magic\n");
    } else {
        printf("It is NOT magic\n");
    }
    return 0;
}


void readSquare(int square[SIZE][SIZE]){
    int row,col;
    row = 0;
    while(row < SIZE){
        col = 0;
        while(col < SIZE){
             scanf("%d",&square[row][col]);
             col = col + 1;
        }    
        row = row + 1;
    }

}

void printSquare(int square[SIZE][SIZE]){
    int row,col;
    row = 0;
    while(row < SIZE){
        col = 0;
        while(col < SIZE){
             printf("%d ",square[row][col]);
             col = col + 1;
        }   
        printf("\n"); 
        row = row + 1;
    }

}

int sumFirstRow(int square[SIZE][SIZE]){
    int col;
    int sum = 0;
    
    col = 0;
    while(col < SIZE){
       sum = sum + square[0][col];
       col  = col + 1;
    }
    return sum;
}


int checkMagic(int square[SIZE][SIZE], int magicValue){
    int row,col;
    int isMagic = 1;
    int sumRow;
   
    //Check all other rows. We have already checked the first.
    row = 1;
    while(row < SIZE){
        //check the sum of the row
        col = 0;
        sumRow = 0;
        while(col < SIZE){
           sumRow = sumRow + square[row][col];
           col = col + 1;
        }
        if(sumRow != magicValue){
           isMagic = 0;
        }
        row = row + 1;
    }
    return isMagic;
}

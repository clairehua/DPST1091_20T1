#include <stdio.h>
// remember to use the quotation marks ""
#include "queue.h"

/*
// BAD
// void reallyLongFunctionNameWithLongArguments (int longLongLongArgument1, int longLongLongArgument2, int longLongLongArgument3);
void reallyLongFunctionNameWithLongArguments (int longLongLongArgument1, int longLongLongArgument2, int longLongLongArgument3);


// GOOD
// void reallyLongFunctionNameWithLongArguments (int longLongLongArgument1, int 
// longLongLongArgument2, int longLongLongArgument3);
void reallyLongFunctionNameWithLongArguments (int Argument1, int Argument2, 
                                              int Argument3);
                                              
void reallyLongFunctionNameWithLongArguments (int Argument1, int Argument2, 
                                                             int Argument3);


void reallyLongFunctionNameWithLongArguments (int longLongLongArgument1, 
                                              int longLongLongArgument2, 
                                              int longLongLongArgument3);
                                              
*/                                              
int main (void) {

    // make a new queue
    Queue myQ = newQueue();
    // add stuff to the queue
    queueAdd(myQ, 2);
    queueAdd(myQ, 4);
    queueAdd(myQ, 6);
    // print out the queue  
    queuePrint(myQ);                                           
    destroyQueue(myQ);

    return 0;
}

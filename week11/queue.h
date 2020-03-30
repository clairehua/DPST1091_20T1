
// if not defined (checks if this header has been 
// included in our program before)

#ifndef _QUEUE_H_
#define _QUEUE_H_

// Queue data structure 
typedef struct queueInternals *Queue;


// function prototypes for queue.c

// Add a queueNode to the end of the list (just after back)
void queueAdd(Queue q, int item);

// Create a new Queue
Queue newQueue(void);

// Prints out queue in the form data1 -> data2 -> X
void queuePrint(Queue q);

// destroy queue - frees all alocated memory
void destroyQueue(Queue q);

#endif // _QUEUE_H_

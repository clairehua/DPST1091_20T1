#include <stdio.h>
#include "queue.h"
#include <stdlib.h>

struct queueInternals {
    struct queueNode *front;
    struct queueNode *back;
};

struct queueNode {
    int data;
    struct queueNode *next;
};

// Add a queueNode to the end of the list (just after back)
void queueAdd(Queue q, int item) {
    // TODO: make a new queueNode
    struct queueNode *newNode = malloc(sizeof(struct queueNode));
    // error checking
    if (newNode == NULL) {
        printf("Could not create queue node, memory allocation failed.\n");
        exit(1);
    }

    // TODO: fill in this node
    newNode->data = item;
    newNode->next = NULL;
    // TODO: put into queue
    // cases??
    // Empty
    if (q->front == NULL) {
        // newNode is the first AND last node
        q->front = newNode;
        q->back = newNode;    
    } else {
        q->back->next = newNode;
        q->back = newNode;
    }
    
    
}

// Create a new Queue
Queue newQueue(void) {
    Queue q = malloc(sizeof(struct queueInternals));
    if (q == NULL) {
        printf("Could not create queue node, memory allocation failed.\n");
        exit(1);
    }
    q->front = NULL;
    q->back = NULL;
    return q;
}

// Prints out queue in the form data1 -> data2 -> X
void queuePrint(Queue q) {
    struct queueNode *curr = q->front;
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    printf("X\n");
}


// destroy queue - frees all alocated memory
void destroyQueue(Queue q) {
    struct queueNode *curr = q->front;
    while (curr != NULL) {
        struct queueNode *tmp = curr;
        curr = curr->next;
        free(tmp);
    }
    // now the whole queue is freed
    // now free the queue internals
    free(q);
    

}










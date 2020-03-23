#include <stdio.h>
#include <stdlib.h>

// struct type declaration
struct node {
    struct node *next;
    int          data;
};

// function prototypes
struct node * createNode(int value);
struct node * insertFront(struct node * list, int value);
void printList(struct node * list);
struct node * insertEnd(struct node * list, int value);


int main(void){
    // initialising an empty list (no node)
    struct node *list1 = NULL;
    // populate the list
    // make the list look like this: 1 -> 2 -> 3 -> X
    list1 = insertFront(list1, 2);
    list1 = insertFront(list1, 1);
    list1 = insertFront(list1, 3);
    printList(list1);

    struct node *list2 = NULL;
    
    list2 = insertEnd(list2, 1);
    list2 = insertEnd(list2, 2);
    list2 = insertEnd(list2, 3);
    printList(list2);
    
    // implement this freeList(list1)
    return 0;
}


// helper function to create a new node
// with the integer "value" in the data field
// and returns node
struct node * createNode(int value){
    struct node *newNode = malloc(sizeof(struct node));
    // malloc could fail
    if (newNode == NULL) {
        printf("Not enough memory - in createNode function\n");
        EXIT_FAILURE;
    }
    // *(newNode).data = value;
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

//return a pointer to the first node in the updated list
struct node * insertFront(struct node * list, int value){
    struct node *newNode = createNode(value);
    newNode->next = list;
    
    // could also do this:
    /*
    return newNode;
    */
    
    // resetting the address of list pointer to newNode's address
    list = newNode;
    return list; 
} 


// prints the linked list like this:
// data1 -> data2 -> X
void printList(struct node * list){
    struct node *curr = list;
    
    // going past last node
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    }
    
    printf("X\n");
}


// inserts a node at the end of a given list and returns the list;
struct node * insertEnd(struct node * list, int value){

    // check for base cases!!
    // empty list
    // single node list
    // many node list
    
    struct node *newNode = createNode(value);
    // we only need to deal with empty list1
    if (list == NULL) {
        // when the list is empty the list is now the node
        return newNode;
    }
    

    // DON'T CHANGE INITIAL POINTER
    // MAKE A COPY!!!!!!
    struct node *curr = list;
    
    // stopping at last node
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    // now at the end of the linked list (last node)
    // we want to insert a new node
    curr->next = newNode;
    
    // newNode is the new end
    newNode->next = NULL;   
    return list; 
}





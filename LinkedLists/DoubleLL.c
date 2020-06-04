//Program to check if all the elements are in non-decreasing order or not
#include <stdio.h>
#include <stdlib.h> 

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

int main(){
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *t;
    struct node *p;
    struct node *q;
    struct node *temp;

    //allocate memory heap for the pointers
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    t = (struct node*)malloc(sizeof(struct node));
    p = (struct node*)malloc(sizeof(struct node));
    q = (struct node*)malloc(sizeof(struct node));
    temp = (struct node*)malloc(sizeof(struct node));

    //design the data in double linkedlist
    head -> data = 1;//Initialise the data in first element as a
    head -> prev = NULL;//Link the first element to second element
    head -> next = first;
    first -> data = 2;//initialise the data in second element as b
    first -> prev = head;//link the second element to third element
    first -> next = second;//initialise the data in third element as c
    second -> data = 3;
    second -> prev = first;
    second -> next = third;
    third -> data = 4;
    third -> prev = second;
    third -> next = NULL;

    //Insert the node 't' at the beginning
    t -> data = 5;
    t -> next = head;
    t -> next -> prev = t;
    head = t;
    t -> prev = NULL;

    //Insert the node 'p' at the end
    p -> data = 6;
    p -> next = NULL;
    temp = head;
    while(temp->next)
        temp = temp -> next;
    temp -> next = p;
    p -> prev = temp;

    //Insert the node 'q' after the element 2
    q -> data = 7;
    temp = head;
    while(temp->data!=2)
        temp = temp -> next;
    q -> prev = temp;
    q -> next = temp -> next;
    temp -> next = q;
    temp -> next -> prev = q;

    //print the elements in the double linked list
    while(t){
        printf("%d\n",t->data);
        t = t -> next;
    }

}



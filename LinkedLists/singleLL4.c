//Program to check if all the elements are in non-decreasing order or not
#include <stdio.h>
#include <stdlib.h> 

struct node{
    int data;
    struct node *link;
};

//function to check if all the elements are in non-decreasing order or not
int f(struct node *p){
    return (p==NULL || p->link==NULL || (p->data <= p->link->data && f(p->link)));
}
    
int main(){
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    struct node *sixth = NULL;
    struct node *t;
    struct node *p;
    struct node *q;
    int temp;

    //allocate memory heap for the pointers
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));
    t = (struct node*)malloc(sizeof(struct node));
    p = (struct node*)malloc(sizeof(struct node));
    q = (struct node*)malloc(sizeof(struct node));

    //design the data in linked list
    head -> data = 1;//Initialise the data in first element as a
    head -> link = first;//Link the first element to second element
    first -> data = 2;//initialise the data in second element as b
    first -> link = second;//link the second element to third element
    second -> data = 3;//initialise the data in third element as c
    second -> link = third;
    third -> data = 4;
    third -> link = fourth;
    fourth -> data = 5;
    fourth -> link = fifth;
    fifth -> data = 6;
    fifth -> link = sixth;
    sixth -> data = 7;
    sixth -> link = NULL;

    printf("%d",f(head));//prints 1 if elements are in nondecreasing order or 0 if the elements are in nonicreasing order

}



//Program to understand the traversing operation in LL
#include <stdio.h>
#include <stdlib.h> 
struct node{
    char data;
    struct node *link;
};
    
int main(){
    struct node *head = NULL;
    struct node *first = NULL;
    struct node *second = NULL;
    struct node *third = NULL;
    struct node *fourth = NULL;
    struct node *fifth = NULL;
    struct node *new;
    struct node *new1;
    struct node *new2;
    struct node *t;

    //allocate memory heap for the pointers
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    new = (struct node*)malloc(sizeof(struct node));
    new1 = (struct node*)malloc(sizeof(struct node));
    new2 = (struct node*)malloc(sizeof(struct node));
    t = (struct node*)malloc(sizeof(struct node));
    //design the data in linked list
    head -> data = 'a';//Initialise the data in first element as a
    head -> link = first;//Link the first element to second element
    first -> data = 'b';//initialise the data in second element as b
    first -> link = second;//link the second element to third element
    second -> data = 'c';//initialise the data in third element as c
    second -> link = third;
    third -> data = 'd';
    third -> link = fourth;
    fourth -> data = 'e';
    fourth -> link = fifth;
    fifth -> data = 'f';
    fifth -> link = NULL;
    //a new element g
    new -> data = 'g';
    //Insert the new element g at the beginning
    new -> link = head;
    head = new;
    t = head;
    new1 -> data = 'h';
    // Insert the new element h at the end
    while(t->link)
    {
        t = t -> link;
    }
    t -> link = new1;
    new1 -> link = NULL;
    //new element i
    new2 -> data = 'i';
    //insert element i after second element
    t = head;
    while(t->data!='b'){
        t = t -> link;
    }
    new2 -> link = t -> link;
    t -> link = new2;
    t = head;
    while(t){
        printf("%c\n",t->data);
        t = t -> link;
    }
}

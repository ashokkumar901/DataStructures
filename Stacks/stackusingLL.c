//Program to implement stack using linkedlist
#include <stdio.h>
#include <stdlib.h>

//Define a LinkedList structure
struct node{
    int data;
    struct node *next;
};
typedef struct node node;

//Define the head of the linked list
node *head;
//Function to push the element to a stack
void push(int element){
    node *p;
    p = malloc(sizeof(node));
    if(!p){
        printf("An error occurred while allocating space");
        return;
    }
    p -> data = element;
    p -> next = head;
    head = p;
}

//Function to pop the element from a stack
int pop(){
    int item;
    if(!head){
        printf("under flow");
        return -1;
    }
    node *temp;
    temp = head;
    head = head -> next;
    free(temp);
}

int main(){
    int element1 = 3;
    int element2 = 4;
    int element3 = 5;
    int element4 = 6;
    push(element1);
    push(element2);
    push(element3);
    push(element4);
    node *t = (struct node*)malloc(sizeof(struct node));
    pop();
    pop();
    t = head;
    while(t){
        printf("%d\n",t->data);
        t = t -> next;
    }
}

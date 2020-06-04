//Program to find the number of full nodes in a tree using recursion
//full node is a node which is having both the children
#include <stdio.h>
#include <stdlib.h> 

//Define the structure of tree
struct node{
    char data;
    struct node *left,*right;
};

//function to find the number of full nodes in a tree
int fullNodes(struct node *t){
    if(!t)
        return 0;
    if(!t->left && !t->right) return 0;
    return fullNodes(t->left) + fullNodes(t->right) + (t->left && t->right ? 1 : 0);
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

    //allocate memory heap for the pointers
    head = (struct node*)malloc(sizeof(struct node));
    first = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    fourth = (struct node*)malloc(sizeof(struct node));
    fifth = (struct node*)malloc(sizeof(struct node));
    sixth = (struct node*)malloc(sizeof(struct node));
    t = (struct node*)malloc(sizeof(struct node));
    //design the data in Tree
    head -> data = 'a';//Initialise the data in first node as a
    head -> left = first;//Link the first node a to its left child 
    head -> right = second;//Link the first node a to its right child
    first -> data = 'b';//Initialise the data in second node as b
    second -> data = 'c';//Initialise the data in second node as c
    first -> left = third;//Link the second node b to its left child 
    first -> right = fourth;//Link the second node b to its right child
    third -> data = 'd';//Initialise the data in fo node as c
    fourth -> data = 'e';
    third -> left = NULL;
    third -> right = NULL;
    fourth -> left = NULL;
    fourth -> right = NULL;
    second -> left = fifth;
    second -> right = sixth;
    fifth -> data = 'f';
    sixth -> data = 'g';
    fifth -> left = NULL;
    fifth -> right = NULL;
    sixth -> left = NULL;
    sixth -> right = NULL;
    t = head;
    int fn = fullNodes(t);
    printf("The number of full nodes in the tree: %d",fn);//outputs 3(num of full nodes)
}

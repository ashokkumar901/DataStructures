//Program to understand the tree traversals of inorder, preorder,and postorder
#include <stdio.h>
#include <stdlib.h> 
struct node{
    char data;
    struct node *left,*right;
};

//Function to implement inorder traversal
void inOrder(struct node *t){
    if(t){
        if(t->left)
            inOrder(t->left);
        printf("%c\n",t->data);
        if(t->right)
            inOrder(t->right);
    }
}

//Function to implement preorder traversal
void preOrder(struct node *t){
    if(t){
        printf("%c\n",t->data);
        if(t->left)
            inOrder(t->left);
        if(t->right)
            inOrder(t->right);
    }
}

//Function to implement postorder traversal
void postOrder(struct node *t){
    if(t){
        if(t->left)
            inOrder(t->left);
        if(t->right)
            inOrder(t->right);
        printf("%c\n",t->data);
    }
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
    // while(t){
    //     printf("%c\n",t->data);
    //     t = t -> right;
    // }
    // inOrder(t);
    // preOrder(t);
    postOrder(t);
}

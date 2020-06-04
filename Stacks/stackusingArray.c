//This program implements stack using array . Should be implemented only when the maximum size of the stack known
//Time complexity for pushing and popping is O(1)
#include <stdio.h>
#define max 4

int stack[max];
int top = -1;

//Function to push the element into the stack
void push(int element){
    if(top==max-1){
        printf("overflow");
    }else{
        stack[++top] = element;
    }
    return;
}

//Function to pop the element from the stack
int pop(){
    int item;
    if(top==-1){
        printf("underflow");
        return -1;
    }else{
        item = stack[top--];
        return item;
    }
}

int main(){
    int element1 = 2;
    int element2 = 3;
    int element3 = 4;
    int element4 = 5;
    //Pushing the elements into the stack
    push(element1);
    push(element2);
    push(element3);
    push(element4);
    pop();
    pop();
    push(7);
    push(8);
    // push(10);//overflow
    int t = 0;
    //printing the elements in the stack
    while(t<=max-1){
        printf("%d\n",stack[t]);
        t++;
    }
}
//Program to implement queue using two stacks
#include <stdio.h>
#define max 4

int stack1[max];
int stack2[max];
int top1 = -1;
int top2 = -1;
int gt;

//Function to push the element into the stack1
void push1(int element){
    if(top1==max-1){
        printf("overflow");
    }else{
        stack1[++top1] = element;
    }
    gt = top1;
    return;
}

//Function to push the element into the stack2
void push2(int element){
    if(top2==max-1){
        printf("overflow");
    }else{
        stack2[++top2] = element;
    }
    return;
}

//Function to pop the element from the stack1
int pop1(){
    int item;
    if(top1==-1){
        printf("underflow");
        return -1;
    }else{
        item = stack1[top1--];
        return item;
    }
}

int pop2(){
    int item;
    if(top2==-1){
        printf("underflow");
        return -1;
    }else{
        item = stack2[top2--];
        return item;
    }
}

//Function to implement enqueue
void insert(int element){
    push1(element);
}
//Function to implement dequeue
int delete(){
    int element,i,lastElement;
    if(top2==-1){
        if(top1==-1){
            printf("Q is empty");
            return -1;
        }else{
            for(i=0;i<=gt;i++){
                element = pop1();
                push2(element);
            }
        }
    }
    lastElement = pop2();
    return lastElement;
}

int main(){
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    int first = delete();
    int second = delete();
    int third = delete();
    int fourth = delete();
    printf("%d\n",first);//1
    printf("%d\n",second);//2
    printf("%d\n",third);//3
    printf("%d\n",fourth);  //4 
}
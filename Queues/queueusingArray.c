//This program implements queue using array . Should be implemented only when the maximum size of the queue is known
#include <stdio.h>
#define max 4

int q[max];
int front = 0;
int rear = 0;

//Function to insert an element into the queue
void enqueue(int element){
    rear = (rear + 1) % max;
    if(front == rear){
        printf("Q is full\n");
        if(rear == 0){
            rear = max - 1;
        }else{
            rear = rear - 1;
        }
        return;
    }else{
        q[rear] = element;
        return;
    }
}

//Function to delete the element from the queue
int dequeue(){
    int item;
    if(front == rear){
        printf("Q is empty");
        return -1;
    }else{
        front = (front + 1) % max;
        item = q[front];
        return item;
    }
}
int main(){
    int element1 = 2;
    int element2 = 3;
    int element3 = 4;
    int element4 = 5;
    //Pushing the elements into queue
    enqueue(element1);
    enqueue(element2);
    enqueue(element3);
    //deleting elements from the queue;
    dequeue();
    enqueue(element4);
    enqueue(6);//queue is full
    // dequeue();
    // enqueue(6);//six will be inserted
    int t = 0;
    //printing the elements in the queue
    while(t<=max-1){
        printf("%d\n",q[t]);
        t++;
    }
}
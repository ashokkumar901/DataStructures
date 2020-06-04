//Program to understand structures pointers clearly
#include <stdio.h>
void main(){
    printf("is it in\n");
    int output1,output2,output3,output4,output5,output6,output7;
    struct node{
        int i;
        int *c;
    };
    struct node a[2],*p;
    int b[2] = {30,40};
    p = &a[0];
    a[0].i = 10;
    a[0].c = b;
    a[1].i = 20;
    // printf("%d\n",++p->i);
    // printf("%d\n",(++p)->i);
    // printf("%d\n",(p++)->i);
    // printf("%d\n",*p->c);
    // printf("%d\n",*p->c++);
    // printf("%d\n",(*p->c)++);
    printf("%d\n",*p++->c);
}

// This program is used to find the febonacci sequence
#include <stdio.h>

void main(){
    int first,second,n,sum = 0,counter = 0;
    printf("Enter the first number");
    scanf("%d",&first);
    printf("Enter the second number");
    scanf("%d",&second);
    printf("Enter how many numbers of febonacci seq");
    scanf("%d",&n);
    printf("%d %d ",first,second);
    while(counter<n){
        sum = first + second;
        printf("%d ",sum);
        first = second;
        second = sum;
        counter++;
    }
}
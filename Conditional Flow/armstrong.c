#include <stdio.h>

void main(){
    int n,r,sum=0,originalnumber;
    printf("Enter the integer");
    scanf("%d",&n);
    originalnumber = n;
    while(n>0){
        r = n % 10;
        sum+=r*r*r;
        n = n / 10;
    }
    printf("The cubes sum is %d %d\n",sum,originalnumber);
    if(originalnumber==sum){
        printf("The given number is an armstrong number");
    } else {
        printf("The given number is not an armstrong number");
    }
}
#include <stdio.h>

void main(){
    int n,count=0,r,originalnumber,reversednumber=0;
    printf("Enter the integer");
    scanf("%d",&n);
    originalnumber = n;
    while(n>0){
        r = n % 10;
        reversednumber = reversednumber*10+r;
        n = n/10;
    }
    reversednumber==originalnumber?printf("palindrome"):printf("Not a palindrome");
}
#include <stdio.h>

void main(){
    int n,count=0,r;
    printf("Enter the integer");
    scanf("%d",&n);
    while(n>0){
        printf("here %d\n",n);
        r = n % 10;
        printf("r value %d\n",r);
        n = n / 10;
        printf("n value %d\n",n);
        count++;
    }
    printf("The number of digits in the given integer %d",count);
}
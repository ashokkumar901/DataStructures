#include <stdio.h>

int power(int b,int n){
    int i=1,power=1;
    while(i<=n){
        power*=b;
        i++;
    }
    return power;
}
void main(void){
    int b,n;
    printf("Enter the base value\n");
    scanf("%d",&b);
    printf("Enter the power calue\n");
    scanf("%d",&n);
    int powervalue = power(b,n);
    printf("%d power %d is %d",b,n,powervalue);
}
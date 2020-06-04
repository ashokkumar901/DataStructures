#include <stdio.h>

int main(){
    int i,count = 0,n;
    printf("Enter a number to check wheather it is prime or not");
    scanf("%d",&n);
    if(n<0){
        printf("Please enter a positive number");
        return 0;
    }
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            count = 1;
            break;
        }
    }
    if(count==0){
        printf("%d is a prime number",n);
    }else{
        printf("%d is a not a prime number",n);
    }
}
#include <stdio.h>

int main(){
    int i,n;
    unsigned long long fact = 1;
    printf("Enter for which number you want factorial");
    scanf("%d",&n);
    if(n<0){
        printf("Factorial of negative number does not exist");
    }
    for(i=1;i<=n;i++){
        fact *= i;
    }
    printf("factorial of %d is %llu",n,fact);
}
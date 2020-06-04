#include <stdio.h>

int main(){
    int i,n,sum = 0;
    printf("Enter how many numbers' sum you want");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum + i;
    }
    printf("sum is %d",sum);
}
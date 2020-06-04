#include <stdio.h>

int main(){
    int i=0,n,sum = 0;
    while(i<15){
        printf("Enter 15 numbers this program will give the sum of only positive numbers");
        scanf("%d",&n);
        i++;
        if(n<0) continue;
        sum = sum + n;
    }
    printf("sum is %d",sum);
}
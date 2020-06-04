#include <stdio.h>

int main(){
    int n;
    printf("Enter a positive number to exit");
    do{
        scanf("%d",&n);
    } while (n<=0);
}
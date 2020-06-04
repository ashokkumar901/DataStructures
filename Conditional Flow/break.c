#include <stdio.h>
int main(){
    int i=1,n;
    while(i<=15){
        printf("Enter the numbers");
        scanf("%d",&n);
        i++;
        if(n<0) break;
    }
}
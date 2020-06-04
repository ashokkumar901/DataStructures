#include <stdio.h>

int main(){
    int n1,n2,n3;
    printf("Enter 3 numbers");
    scanf("%d %d %d",&n1,&n2,&n3);
    if(n1>n2 && n1>n3){
        printf("%d is the largest",n1);
    }
    if(n2>n1 && n2>n3){
        printf("%d is the largest",n2);
    }
    if(n3>n2 && n3>n1){
        printf("%d is the largest",n3);
    }
}
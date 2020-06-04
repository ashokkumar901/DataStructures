#include <stdio.h>

int main(){
    int i,j,n,k;
    printf("Enter how many rows of pyramid");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       for(j=i;j<n;j++){
           printf(" ");
       }
       for(k=1;k<2*i;k++){
           printf("*");
       }
       printf("\n");
    }
}
#include <stdio.h>

void main(){
    int n;
    for(n = 3;n!=0;n--){
        printf("%d\n",n--);//infinite loop
    }
}
#include <stdio.h>

int main(){
    register int i = 10;
    int *a = &i;
    printf("%d",*a);//no output
    return 0;
}
#include <stdio.h>

int main(){
    int i = 10;
    register static int i = 19;
    printf("%d",i);//multiple storage classes error
    return 0;
}
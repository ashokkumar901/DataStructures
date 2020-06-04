#include <stdio.h>
int main(){
   int a = 4;
   int b = 3;
   //Values of a and be will not be changed now
//    swap1(a,b);
   //values of a and be will be changed now
   swap2(&a,&b);
   printf("%d %d",a,b);
}

//values of a and be will not be changed with this function
void swap1(int x,int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

//values of a and be will be changed with this function
void swap2(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
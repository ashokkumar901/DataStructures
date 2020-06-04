//Optimised tower of hanoi program
//Time Complexity = O(2^n) Space complexity = O(n)
//No of invocations = 2^n - 1
#include <stdio.h>

//x,y and z are towers and n is the numbers of discs
int toh(int n,char x,char y,char z){
    if(n>1){
        toh(n-1,x,z,y);
        printf("move from %c to %c\n",x,y);
        toh(n-1,z,y,x);
    }else if(n==1){
        printf("move from %c to %c\n",x,y);
    }
}
int main(){
   int n;
   char x = 'x';
   char y = 'y';
   char z = 'z';
   printf("Enter the number of towers to move\n");
   scanf("%d",&n);
   toh(n,x,y,z);
}
// Example to explain the concept of pointer
#include <stdio.h>
int main(void){
  int x = 5;
  int *y = &x;
  printf("%d\n" , x);//5
  printf("%u\n",&x);//Address of x
  printf("%u\n",y);//Address of x
  printf("%d\n",*y);//5
  printf("%u\n",&y);//Address of y
}
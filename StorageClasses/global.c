#include <stdio.h>
int i;
void func1(){
    i = 20;
    printf("%d ",i);
}

void func2(){
    int i = 30;
    printf("%d",i);
}

int main(){
   func1();
   func2();//outputs 20 30
   return 0;
}
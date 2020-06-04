#include <stdio.h>

int countFunction(void){
    int count = 0;
    return ++count;
}

int countFunction1(void){
    static int count2 = 0;
    return ++count2;
}

int main(){
    countFunction();
    countFunction();
    countFunction();
    countFunction1();
    countFunction1();
    countFunction1();
    printf("%d time the function is called\n",countFunction());//outputs 1
    printf("%d time the function is called",countFunction1());//outputs 4
}


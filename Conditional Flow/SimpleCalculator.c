#include <stdio.h>

int main(){
    char operand;
    double a,b;
    printf("Enter the operation (+,-,*,/)\n");
    scanf("%c",&operand);
    printf("Enter two numbers a and b\n");
    scanf("%lf %lf",&a,&b);
    switch(operand){
        case '+': printf("a+b is %lf",a+b);break;
        case '-': printf("a-b is %lf",a-b);break;
        case '*': printf("a*b is %lf",a*b);break;
        case '/': printf("a/b is %lf",a/b);break;
        default: printf("Enter a valid input");
    }
}
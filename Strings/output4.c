#include <stdio.h>
char *getString(){
    char str[] = "print it";
    return str;
}

void main(){
    printf("%s",getString());//outouts null
}
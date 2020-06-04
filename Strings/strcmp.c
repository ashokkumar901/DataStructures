//Program to differentiate two strings
#include <stdio.h>

int strCmp(char *s, char *t){
    while(*s == *t){
        s++;
        t++;
        if(*s=='\0')
            return 0;
    }
    return *s - *t;
}
int main(){
    char s[] = "ashok";
    char t[] = "asj";
    int output = strCmp(s,t);
    printf("%d",output);//-outputs -2
}

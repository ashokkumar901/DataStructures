//Program to concatenate two strings
#include <stdio.h>

char* strCat(char *s, char *t){
    while(*s)
        *s++;
    while((*s++ = *t++)!='\0');
    return s;
}
int main(){
    char s[] = "ashok";
    char t[] = "kumar";
    strCat(s,t);
    printf("%s",s);//ashokkumar
}


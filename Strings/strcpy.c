//Program to copy the elements from one string to the other string
#include <stdio.h>

char* strCpy(char *s, char *t){
    while((*s++ = *t++)!='\0');
    return s;
}
int main(){
    char s[] = "ashok";
    char t[] = "kumar";
    strCpy(s,t);
    printf("%s",s);//kumar
}


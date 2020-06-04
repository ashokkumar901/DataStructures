#include <stdio.h>
int main(){
    char s1[] = "string";
    char s2[100];
    strCopy(s2,s1);
    printf("%s\n",s1);
    printf("%s\n",s2);
}
strCopy(char *s, char *t){
    while(*s++ = *t++);
}
//program to reverse a string
#include <stdio.h>
#include <string.h>

void reverse(char *s){
    int i,j,c;
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}
int main(){
    char s1[] = "ashok";
    reverse(s1);
    printf("%s",s1);
}


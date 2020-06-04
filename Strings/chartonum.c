//program to convert a string to a number
#include <stdio.h>
#include <string.h>

//function to convert the string to a number
int stringtoNum(char *s){
    int i,n=0;
    for(i=0;s[i]>='0' && s[i]<='9';i++)
        n = 10*n + (s[i]-'0');
    return n;
}

int main(){
    char s[] = "123";
    int n = stringtoNum(s);
    printf("converted value: %d",n);
}


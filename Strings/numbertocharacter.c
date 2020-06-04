//program to convert a number to a string
#include <stdio.h>
#include <string.h>

//function to reverse a string
void reverse(char *s){
    int i,j,c;
    for(i=0,j=strlen(s)-1;i<j;i++,j--){
        c = s[j];
        s[j] = s[i];
        s[i] = c;
    }
}
//function to convert the number to string
char * numtoString(int n,char *s){
    int i=0,sign;
    if((sign=n)<0) 
        n = -n;
    do{
        s[i++] = n%10 + '0';
    }while((n/=10)>0);

    if(sign<0)  
        s[i++] = '-';
    s[i] = '\0';
    reverse(s);
    return s;
}

int main(){
    int n = 567;
    char s[3];
    numtoString(n,s);
    printf("converted value: %s",s);
}


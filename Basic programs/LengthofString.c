//Program to find the length of the string
#include <stdio.h>
int main(void){
   int len(char s[]){
       int i = 0;
       while(s[i]!='\0'){
           i = i + 1;
       }
       return i;
   }
   printf("%d",len("ravi"));
}
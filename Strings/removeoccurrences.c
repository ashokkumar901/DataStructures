// program to remove all occurrences from a string
#include <stdio.h>

//Function to remove all occurrences from a string
void removeOccurrences(char *s,int c){
    int i,j;
    for(i=0,j=0;s[i]!='\0';i++){
        if(s[i]!=c)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int main(){
    char s[] = "ABBC";
    int n = 'B';
    removeOccurrences(s,n);
    printf("String after removing all occurrences %s",s);
}
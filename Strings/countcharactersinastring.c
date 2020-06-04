//Program to the characters from the input
#include <stdio.h>

int main(){
   int nc;
   for(nc = 0;getchar()!=EOF;++nc);
   printf("%d",nc);
}


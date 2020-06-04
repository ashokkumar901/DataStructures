#include <stdio.h>

void main(){
    enum {false,true};
    int i;
    do{
        i = 1;
        printf("%d\n",i);
        i++;
        if(i<15)
            continue;
    }while(false);//outputs 1
}
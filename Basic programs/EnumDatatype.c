//enum data type is used to improve readability
#include <stdio.h>
void main(void){
   enum {no,yes};//no means 0 yes means 1
   enum {jan=2,feb,march};
   int x = 1;
   int month2 = 3;
   if(x==no){
       printf("false");
   } else {
       printf("yes it working");
   }
   if(month2==feb){
       printf("it is a february for sure");
   }
}
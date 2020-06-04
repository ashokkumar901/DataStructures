#include <stdio.h>
int main()
{
   int x = 45, y = 90;
   float z = 45.0;
   printf("%d\n", x);//prints x as a decimal number
   printf("%6d\n", x);//prints x as a decimal number atleast 6 characters wide
   printf("%f\n", z);//prints z as a floating point
   printf("%.2f\n",z);//prints z and exactly 2 decimals after point
   printf("%10.2f\n",z);//atleast 10 characters wide and 2 decimals after point
   printf("%c",x);//prints the ascii character of the variable
}
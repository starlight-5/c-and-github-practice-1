#include <stdio.h>
int main(void)
{
   int a=10,b=0,c=0;
   int num1,num2,num3,num4,num5;
   num1= a && b;
   num2= a || b;
   num3= (a>b) && (a<c);
   num4= !c;
   num5= b && c;
   printf("%d \n %d \n %d \n %d \n %d",num1,num2,num3, num4,num5);
}

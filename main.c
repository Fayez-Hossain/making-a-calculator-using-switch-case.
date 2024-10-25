//making a calculator using switch case.
#include <stdio.h>

int main()
{
   double x,y;
   char i;
   printf("enter your first number:");
   scanf("%lf",&x);

   printf("enter your choice:(+,-,*,/);");
   scanf(" %c",&i);

   printf("enter your second number:");
   scanf("%lf",&y);
   switch(i){
   case'+':
       printf("%lf+%lf=%lf",x,y,x+y);
       break;

       case'-':
       printf("%lf-%lf=%lf",x,y,x-y);
       break;

       case'*':
       printf("%lf*%lf=%lf",x,y,x*y);
       break;

       case'/':
       printf("%lf/%lf=%lf",x,y,x/y);
       break;

       default:
        printf("error!choice is not correct.");

   }

    return 0;
}

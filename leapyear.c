#include <stdio.h>

int main()
{
    int a;
    printf("enter the year:");
    scanf("%d",&a);
   if(a%4 == 0)
   {
       if(a%100 == 0)
       {
        printf("%d is a leap year",a);   
       }
       
       else
       printf("%d a leap year",a);
   }
   else
   printf("%d not a leap year",a);
}

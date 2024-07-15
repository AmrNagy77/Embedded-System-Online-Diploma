/*
 ============================================================================
 Author      : Amr Nagy
 Description : Swap Two Numbers
 ============================================================================
 */


#include <stdio.h>

int main ()
{
float a1,b1;
   printf("Enter a value of a : ");
    scanf("%f",&a1);
   printf("Enter a value of b : ");
    scanf("%f",&b1);
float a2,b2;
    a2=b1;
    b2=a1;
   printf("After swapping, value of a: %f",a2);
   printf("\nAfter swapping, value of b: %f",b2);
     
return 0;
}
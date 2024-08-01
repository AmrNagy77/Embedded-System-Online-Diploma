/*
 ============================================================================
 Author      : Amr Nagy
 Description : Check Whether a Number is Positive or negative 
 ============================================================================
 */


#include <stdio.h>

int main ()
{
float num;
 printf("Please Enter a Number : ");
  scanf("%f",&num);

 if (num>0)
 {
    printf("%f is Positive",num);
 }
 else if (num<0)
 {
    printf("%f is Negative",num);
 }
 else
 {
    printf("You Entered Zero");
 } 

return 0;
}
/*
 ============================================================================
 Author      : Amr Nagy
 Description : find the largest number among three numbers
 ============================================================================
 */


#include <stdio.h>

int main ()
{
float x,y,z;
 printf("Enter Three Numbers : ");
 scanf("%f%f%f",&x,&y,&z);

  if (x>y&&x>z)
  {
    printf("The Largest Number is : %f",x);
  }
  else if (y>x&&y>z)
  {
    printf("The Largest Number is : %f",y);
  }
  else 
  {
    printf("The Largest Number is : %f",z);

  }
return 0;
}
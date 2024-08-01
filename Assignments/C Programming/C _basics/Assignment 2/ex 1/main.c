/*
 ============================================================================
 Author      : Amr Nagy
 Description : check whether a number is even or odd
 ============================================================================
 */


#include <stdio.h>

int main ()
{
int num;
int check;
printf("Enter Your Integer You Want to Check: ");
 scanf("%d",&num);
 
   check=num%2;
  if (check==0)
  { 
    printf("%d is even",num);
  }
  else 
  {
    printf("%d is odd",num);
  }
  return 0;  
}

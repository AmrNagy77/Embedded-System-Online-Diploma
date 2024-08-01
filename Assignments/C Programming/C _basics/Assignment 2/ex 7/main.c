/*
 ============================================================================
 Author      : Amr Nagy
 Description : find a Factorial of a Number 
 ============================================================================
 */


#include <stdio.h>

int main ()
{
int n;
int i;
int fact=1;
 printf("Please Enter An Integer : ");
  scanf("%d",&n);
  
if(n>=0)
{
   for (i=2;i<=n;i++)
    {
      fact *= i;
    } 
 printf("Factorial = %d",fact);
}
else 
{
  printf("Error!! factorial of Negative number dose not exist");
}
return 0;
}
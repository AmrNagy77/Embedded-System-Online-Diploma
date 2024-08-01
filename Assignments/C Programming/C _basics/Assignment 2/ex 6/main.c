/*
 ============================================================================
 Author      : Amr Nagy
 Description : calculate sum of natural numbers from 1 to n
 ============================================================================
 */


#include <stdio.h>

int main ()
{
int n;
int i;
int sum =0;
printf("Please Enter an integer: ");
scanf("%d",&n);
  
  for (i=1;i<=n;i++)
    {
       sum +=i;
    }
    printf("Sum = %d",sum);
  
  return 0;
}
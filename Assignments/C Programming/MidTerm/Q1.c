/*
 ============================================================================
 Author      : Amr Nagy
 Description : Midterm Q1 (C function to take a number and sum all digits)
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

int Sum_Digits(int n)
{
    int sum=0;
    int i=n;
      while (i!=0)
       {
        sum+=(i%10);
        i/=10;
       }
return sum;
}

int main ()
{
    int x;
      scanf("%d",&x);
        printf("%d",Sum_Digits(x));
        return 0;
}
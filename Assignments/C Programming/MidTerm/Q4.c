/*
 ============================================================================
 Author      : Amr Nagy
 Description : Midterm Q4 (C function to revers digits in number)
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void Reverse_Digits(int n)
{
    int i=n;
      while (i!=0)
       {
        printf("%d",(i%10));
        i/=10;
       }
}

int main ()
{
    int x;
      scanf("%d",&x);

    Reverse_Digits(x);

        return 0;
}
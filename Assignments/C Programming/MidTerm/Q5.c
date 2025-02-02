/*
 =============================================================================
 Author      : Amr Nagy
 Description : Midterm Q5 (C function to count number of ones in binary number)
 =============================================================================
 */

#include <stdio.h>
#include <string.h>

int Count_Ones (int n)
{
    int count=0;
    while (n) 
    {
        if (n & 1)
           count++;

        n >>= 1;
    }
return count;
}

int main ()
{
    int x;
      scanf("%d",&x);

    printf("%d",Count_Ones(x));

return 0;
}
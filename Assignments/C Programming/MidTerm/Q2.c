/*
 ==============================================================================================
 Author      : Amr Nagy
 Description : Midterm Q2 (C function to take an integer number and calculate it's square root)
 ==============================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>

double Squ_root(int n)
{
  double root = sqrt(n);
  return root;
}

int main()
{
    int x;
     scanf("%d",&x);
       printf("%f",Squ_root(x));
     return 0;
}
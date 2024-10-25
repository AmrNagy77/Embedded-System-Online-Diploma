/*
 =================================================================================
 Author      : Amr Nagy
 Description : C Program To Compute A Factorial of a Number Using Recursion.
 =================================================================================
 */

#include <stdio.h>

int fact=1;
int temp=1;

int Fact_Number (int n1)
  {   
    while(temp<=n1){
     fact*=temp;
     temp++;
     Fact_Number(n1);
    }
return fact;
  }

int main ()
 {
    printf("Enter a Positive Number : ");
    int n;
    scanf("%d",&n);

    printf("Factorial of %d = %d ",n,Fact_Number(n));

return 0;
 }
/*
 =================================================================================
 Author      : Amr Nagy
 Description : C Program To Calculate The Power of A Number Using Recursion.
 =================================================================================
 */

#include <stdio.h>
#include <string.h>

int pwr=1;

int Pwr_Num(int x,int y)
 {    
        pwr*=x;
        y--;
        if (y>0)
        Pwr_Num(x,y);
  return pwr;  
 }

 int main ()
  {
    int n1,n2;

    printf("Enter The Base Number: ");
     scanf("%d",&n1);
    printf("Enter The Power Number: ");
     scanf("%d",&n2);

   printf("%d^%d=%d",n1,n2,Pwr_Num(n1,n2)); 

   return 0;
  }

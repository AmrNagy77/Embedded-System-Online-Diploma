/*
 =================================================================================
 Author      : Amr Nagy
 Description : Prime Number Between Two Intervals By Making using-defined Function
 =================================================================================
 */

#include <stdio.h>

void Prime_Number (int a,int b)
  {   
    if (a<=5)
     {
        printf("%d %d %d ",2,3,5);
     }
    for (int i=a;i<=b;i++)
    {
        int temp=i;
      if ((temp%2!=0)&&(temp%3!=0)&&(temp%5!=0))
      {
        printf("%d ",i);
      }
    }        
  }

int main ()
  {
    int x,y;

    printf("Enter Two Numbers Intervals :");
    scanf("%d %d",&x,&y);

        printf("Prime Numbers Between %d and %d is :",x,y);
          Prime_Number(x,y);
return 0;
  }  
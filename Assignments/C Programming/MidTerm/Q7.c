/*
 ====================================================================================
 Author      : Amr Nagy
 Description : Midterm Q7 (C function to sum numbers from 1 to 100(without loop)
 ====================================================================================
 */

#include <stdio.h>
#include <string.h>

void Print(int i)
{
     if(i<=100)
      {
         printf("%d ",i);
         i++;
          Print(i);
      }
}

int main ()
{
    int i=1;
    Print(i);

return 0;
}
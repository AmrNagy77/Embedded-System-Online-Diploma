/*
 ====================================================================================
 Author      : Amr Nagy
 Description : Midterm Q8 (C function to take an array and revers its elements)
 ====================================================================================
 */

#include <stdio.h>
#include <string.h>

void Reverse(int arr[],int n)
{
    for (int i=n-1;i>=0;i--)
      {
        printf("%d ",arr[i]);
      }
}

int main()
{
    int xarr[50];
    int m;
     printf("Enter the number of  elements: ");
       scanf("%d",&m);
        for (int i=0;i<m;i++)
         {
            scanf("\n%d",&xarr[i]);
         }
    
   Reverse(xarr,m);

return 0;
} 
/*
 ====================================================================================
 Author      : Amr Nagy
 Description : Midterm Q6 (C function to return unique number in array with one loop)
 ====================================================================================
 */

#include <stdio.h>
#include <string.h>

int Unique_N(int arr[],int n)
{
    int count=0;
    for (int i=0;i<n;i++)
      {
        for (int j=0;j<n;j++)
          {
             if (arr[i]==arr[j])
               count+=1;
          }

        if (count==1)
        {
            return arr[i];
        break;
        }
        count=0;
      }

}

int main()
{
    int xarr[]={4,2,5,2,5,7,4};
    int size = sizeof(xarr)/sizeof(xarr[0]);

    printf("%d",Unique_N(xarr,size));

return 0;
} 
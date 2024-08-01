/*
 ============================================================================
 Author      : Amr Nagy
 Description : Sum of two Multidimesional Arrays Degree(2,2)
 ============================================================================
 */


#include <stdio.h>
int main(){

float a[2][2];
float b[2][2];
int i,j;
printf("Enter Array_1 Elements : \n");
  for(i=0;i<=1;i++)
     {
      for(j=0;j<=1;j++)
        {
          printf("a%d%d= ",i,j);
          scanf("%f",&a[i][j]);
        }
     }
printf("Enter Array_2 Elements : \n");
  for(i=0;i<=1;i++)
     {
      for(j=0;j<=1;j++)
        {
          printf("b%d%d= ",i,j);
          scanf("%f",&b[i][j]);
        }
     }
float s[2][2];
   for(i=0;i<=1;i++)
     {
      for(j=0;j<=1;j++)
        {
        s[i][j]=a[i][j]+b[i][j];
        }
     }
printf("Sum of Matrix is : \n");
   for(i=0;i<=1;i++)
     {
      for(j=0;j<=1;j++)
        {
          printf("%f \t",s[i][j]);
          if (j==1)
          {
            printf("\n");
          }
        }
     }
return 0;     
}
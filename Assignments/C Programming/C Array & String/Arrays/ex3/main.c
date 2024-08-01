/*
 ============================================================================
 Author      : Amr Nagy
 Description : find a transpose of matrix
 ============================================================================
 */


#include <stdio.h>
int main (){

float x[50][50];
float trans[50][50];
int i,j;
int n,m;

printf("Enter Rows =  ");
scanf("%d",&n);
printf("Enter Columns =  ");
scanf("%d",&m);

for (i=0;i<=n-1;i++)
  {
    for (j=0;j<=m-1;j++)
      {
          printf("Enter item (%d,%d) value: ",i,j);
          scanf("%f",&x[i][j]);
      }
  }
  printf("The matrix is:\n");
for (i=0;i<=n-1;i++)
  {
    for (j=0;j<=m-1;j++)
      {
          printf("%f\t",x[i][j]);
          if (j==m-1)
            printf("\n");
      }
  }
  for (i=0;i<=m-1;i++)
  {
    for (j=0;j<=n-1;j++)
      {
        trans[i][j]=x[j][i];
      }
  }
  printf("The transpose matrix is:\n");
for (i=0;i<=m-1;i++)
  {
    for (j=0;j<=n-1;j++)
      {
       printf("%f\t",trans[i][j]);
        if (j==n-1)
         printf("\n");
      }
  }
return 0;
}
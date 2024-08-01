/*
 ============================================================================
 Author      : Amr Nagy
 Description : Insert an element in array
 ============================================================================
 */


#include <stdio.h>
int main(){

int n,l;
float g;
float x[50];
printf("Enter number of elements :\n ");
scanf("%d",&n);
printf("Enter Values : ");
   for(int i=0;i<=n-1;i++)
    {
        scanf("%f",&x[i]);
    }
   
printf("Enter Element you want to be inserted : ");
scanf("%f",&g);
printf("Enter Location : ");
scanf("%d",&l);

for (int i=n;i>=l-1;i--)
  {
      x[i]=x[i-1];
  }
x[l-1]=g;

for (int i=0;i<=n;i++)
  {
    printf("%f \n",x[i]);
  }
return 0;
}
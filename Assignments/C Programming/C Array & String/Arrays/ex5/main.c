/*
 ============================================================================
 Author      : Amr Nagy
 Description : search an element in an array
 ============================================================================
 */

#include <stdio.h>
int main(){

float x[20];
int i,n;
float v;
printf("Enter A number of Elements : ");
scanf("%d",&n);
printf("Enter elements: \n");
for (i=0;i<=n-1;i++)
  {
    scanf("%f",&x[i]);
  }
printf("Enter value to search it : ");
scanf("%f",&v);

for (i=0;i<=n-1;i++)
  {
    if (v==x[i])
    {
      printf("Your Value %f found at location %d",v,i+1);
      break;
    }
  }
  if (i==n)
    printf("Soory its value is not founded");
return 0;
}
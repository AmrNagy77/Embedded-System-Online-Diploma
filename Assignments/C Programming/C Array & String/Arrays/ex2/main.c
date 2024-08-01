/*
 ============================================================================
 Author      : Amr Nagy
 Description : Calculate Average using Array
 ============================================================================
 */


#include <stdio.h>
int main (){

float x[100];
int n;
printf("Entet number of elements : ");
scanf("%d",&n);

    for(int i=0;i<=n;i++)
    {
        printf("number(%d) = ",i);
        scanf("%f",&x[i]);
    }

float sum=0;
    for (int i=0;i<=n;i++)
    {
        sum+=x[i];
    }
    float ave = sum/n;
printf("Average = %f",ave);
}
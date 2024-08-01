/*
 ============================================================================
 Author      : Amr Nagy
 Description : Calculator
 ============================================================================
 */


#include <stdio.h>

int main ()
{
char oper;
float num1,num2;
float a,b,c,d;
printf("Enter an operator either '+' or '-' or '*' or '/' : ");
scanf("%c",&oper);
printf("Enter First Number = ");
scanf("%f",&num1);
printf("Enter Second Number = ");
scanf("%f",&num2);

    a = num1+num2;
    b = num1-num2;
    c = num1*num2;
    d = num1/num2;

 if (oper == '+')
 {
    printf("%f  %c  %f = %f ",num1,oper,num2,a);
 }
 else if (oper == '-')
 {
    printf("%f  %c  %f = %f ",num1,oper,num2,b);   
 }
 else if (oper == '*')
 {
    printf("%f  %c  %f = %f ",num1,oper,num2,c);
 }
 else if (oper == '/')
 {
    printf("%f  %c  %f = %f ",num1,oper,num2,d);
 }
else 
 {
    printf("Error!!!");
 } 
 return 0;
}

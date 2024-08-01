/*
 ============================================================================
 Author      : Amr Nagy
 Description : Find a Length of a string
 ============================================================================
 */


#include <stdio.h>
#include <string.h>
int main (){

char c[50];
printf("Enter Your String : ");
gets(c);

printf("%d",strlen(c));

return 0;
}
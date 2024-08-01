/*
 ============================================================================
 Author      : Amr Nagy
 Description : Reverse String Without using Library Function
 ============================================================================
 */


#include <stdio.h>
#include <string.h>
int main (){

char s[50];
char r[50];
printf("Enter a String : ");
gets(s);
for (int i=0;i<strlen(s);i++)
{
  r[i]=s[strlen(s)-i-1];
}
r[strlen(s)]='\0';

printf("Reverse String is : %s ",r);

return 0;
}
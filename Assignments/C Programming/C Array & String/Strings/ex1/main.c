/*
 ============================================================================
 Author      : Amr Nagy
 Description : Find A frequency of a character in a string
 ============================================================================
 */


#include <stdio.h>
#include <string.h>
int main (){

char s[50];
char ch;
printf("Enter a String : ");
gets(s);
printf("Enter a charcter you want to calculate a frequency : ");
scanf("%c",&ch);

int count=0;
for (int i=0;i<strlen(s);i++)
  {
   if (ch==s[i])
   {
    count+=1;
   }
  }
printf("frequency of %c =%d",ch,count);

return 0;
}
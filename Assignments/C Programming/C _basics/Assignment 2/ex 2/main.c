/*
 ============================================================================
 Author      : Amr Nagy
 Description : check vowel or constant
 ============================================================================
 */


#include <stdio.h>

int main ()
{
char x;
 printf("Enter an alphabet : ");
  scanf("%c",&x);
  
  if (x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
  {
    printf("%c is a vowel",x);
  }
  else 
  {
    printf("%c is not vowel",x);
  } 
return 0;
}
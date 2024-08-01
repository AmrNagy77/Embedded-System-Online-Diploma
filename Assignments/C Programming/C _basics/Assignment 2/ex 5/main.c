/*
 ============================================================================
 Author      : Amr Nagy
 Description : Check Whether a character is an alphabet or not 
 ============================================================================
 */


#include <stdio.h>
#include <ctype.h>
int main ()
{
char c;
 printf("Enter a character : ");
 scanf("%c",&c);

   if (isalpha(c))
   {
    printf("%c is Alphabet",c);
   }
   else 
   {
    printf("%c is not Alphabet",c);
   }
return 0;
}
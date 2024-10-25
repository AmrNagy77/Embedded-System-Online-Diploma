/*
 =================================================================================
 Author      : Amr Nagy
 Description : C Program To Reverse a String Using Recursion.
 =================================================================================
 */

#include <stdio.h>
#include <string.h>


void Rev_Str(char x[],int i)
 {
    if (i>=0)
    {
          printf("%c",x[i]);
            i--;
        Rev_Str(x,i);    
    }
 }

int main ()
 {
    char str[100];
    printf("Enter a sentence :");
      gets(str);

    int c = strlen(str);

    Rev_Str(str,c);  

  return 0;  
 }
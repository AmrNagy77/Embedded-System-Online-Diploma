/*
 ====================================================================================
 Author      : Amr Nagy
 Description : Midterm Q9 (C function to reverse words in string)
 ====================================================================================
 */

#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) 
{
    int len = strlen(str);
    int end = len, i;

    for (i = len - 1; i >= 0; i--) 
    {
        if (str[i] == ' ' || i == 0) {
            int start = (i == 0) ? i : i + 1;
            for (int j = start; j < end; j++) 
            {
                printf("%c", str[j]);
            }
            if (i > 0) 
            {
                printf(" ");
            }
            end = i;
        }
    }
}

int main() 
{
    char str[100];  

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

  
    str[strcspn(str, "\n")] = 0;

    printf("Reversed: ");
    reverseWords(str);
    printf("\n");

    return 0;
}



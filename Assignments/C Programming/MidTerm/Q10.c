/*
 ========================================================================================
 Author      : Amr Nagy
 Description : Midterm Q10 (C function to count the max number of ones between two zeros)
 ========================================================================================
 */

#include <stdio.h>

int maxOnes(int num) {
    int max_count = 0, count = 0;

    while (num > 0) {
        if (num & 1) {  
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;  
        }
        num >>= 1;  
    }

    return max_count;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d\n", maxOnes(num));

    return 0;
}

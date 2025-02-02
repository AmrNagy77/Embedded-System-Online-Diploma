/*
 ===================================================================================
 Author      : Amr Nagy
 Description : Midterm Q3 (C function to print all prime numbers between two numbers)
 ===================================================================================
 */

#include <stdio.h>
#include <math.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int print_primes(int start,int end) {

    for (int i = start; i <= end; i++) {
        if (is_prime(i)) {
            printf("%d ",i);
        }
    }
}

int main() {
    int n1,n2;
    printf("n1 : ");
      scanf("%d", &n1);
    printf("n2 : ");
      scanf("%d", &n2);
    
    print_primes(n1,n2);

    return 0;
}

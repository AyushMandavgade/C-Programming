// Write a program in C to input a number and check whether the number is prime number or not using for loop.

#include <stdio.h>

int main() {
    int n, i, flag = 0;

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Prime numbers are greater than 1
    if (n <= 1)
    {
        printf("%d is not a prime number.\n", n);
        
    }

    // Check for factors from 2 to sqrt(n)
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            flag = 1; // A factor was found
            break;
        }
    }

    // If no factors found, n is prime
    if (flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
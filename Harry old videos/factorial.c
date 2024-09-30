#include <stdio.h>

int main() {
    int num;
    int factorial = 1;  // Start with 1 since factorial of 0 is 1

    // Asking for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using a for loop to calculate factorial
    for(int i = 1; i <= num; i++) {
        factorial = factorial * i;  // Multiply factorial by i
    }

    // Output the result
    printf("Factorial of %d = %d\n", num, factorial);

    return 0;
}

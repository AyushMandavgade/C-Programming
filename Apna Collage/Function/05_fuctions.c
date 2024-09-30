#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate sum from 1 to n
    for (int i = 1; i <= n; ++i) {
        sum = sum + i;
    }

    // Output the result
    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}

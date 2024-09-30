#include <stdio.h>

int main() {
    int base, exponent;
    long long result = 1;

    // Input base and exponent from user
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    // Calculate power using for loop
    for(int i = 1; i <= exponent; i++) {
        result = result * base;

    }

    printf("%d^%d = %lld\n", base, exponent, result);

    return 0;
}

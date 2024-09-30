#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Compare numbers using only if statements
    if ( (a > b) && (a > c) ) {
        printf("The greatest number is: %d\n", a);
    }
    
    if ( (b > a) && (b > c) ) {
        printf("The greatest number is: %d\n", b);
    }
    
    if ( (c > a) && (c > b) ) {
        printf("The greatest number is: %d\n", c);
    }

    return 0;
}

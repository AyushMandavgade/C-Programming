// C program to find square root of a number


#include <stdio.h>
#include <math.h>

int main()
{
    double num, root;

    printf("Enter any number to find square root: ");
    scanf("%lf", &num);

    /* Calculate square root of num */
    root = sqrt(num);

    /* Print the resultant value */
    printf("Square root of %.2lf = %.2lf", num, root);

    return 0;
}
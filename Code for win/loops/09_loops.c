/*Write a C program to input a number from user and print multiplication table of the given number using for loop*/



#include <stdio.h>

int main()
{
    int i, num;

    /* Input a number to print table */
    printf("Enter number to print table: ");
    scanf("%d", &num);

    for(i=1; i<=10; i++)
    {
        printf("%d * %d = %d\n", num, i, (num*i));
    }

    return 0;
}
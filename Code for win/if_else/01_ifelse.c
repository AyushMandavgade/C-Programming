// Write a C program to find maximum between two numbers using if else

#include <stdio.h>

int main(){
    int num1,num2;
    printf("Enter number 1 :");
    scanf("%d",&num1);
    printf("Enter number 2 :");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("%d is maximum",num1);
    }

    if(num2>num1)
    {
        printf("%d is maximum",num2);
    }
    return 0;
}
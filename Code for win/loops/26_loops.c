// Write a program in C to input a number and check whether the number is prime number or not using for loop

#include <stdio.h>

int main(){
    int num,i,isPrime;

    // isPrime = 1 for prime number and isPrime = 0 for not prime 

    printf("Enter a number :");
    scanf("%d",&num);

    isPrime=1;

    if(num <= 1)
    {
        printf("%d is not a prime number",num);
    }

    for(i=2;i<=num/2;i++)
    {
        if(num%i == 0)
        {
            isPrime = 0;
        }
        break;
    }

    if(isPrime == 1)
    {
        printf("%d is a prime number",num);
    }
    else
    {
        printf("%d is not a prime number",num);
    }
    
    return 0;
}
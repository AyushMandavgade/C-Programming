// Write a C program to input elements in array and count negative elements in array

#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int i,size,n;
    int negative_count = 0;

    printf("Enter the size of the array :");
    scanf("%d",&size);

    printf("Enter the elements of the array :");

    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i]<0)
        {
            negative_count++;
        }
    }
    printf("The total negative numbers are %d",negative_count);

    return 0;
}
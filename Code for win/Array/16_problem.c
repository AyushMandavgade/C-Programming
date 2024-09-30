#include <stdio.h>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int i,j,size;

    printf("Enter the size of array :");
    scanf("%d",&size);

    printf("Enter the elements of array :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i = size-1; i>=0; i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
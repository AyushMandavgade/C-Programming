#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE];
    int i, size,frequency = 0;

    /* Input size and element in array */
    printf("Enter size of the array : ");
    scanf("%d", &size);
    
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<size;i++)
    {
        if(arr[i] == arr[i])
        {
            frequency++;
        }
    }
    printf("The frequency is %d",&frequency);
    return 0;
}    
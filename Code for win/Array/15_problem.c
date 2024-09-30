/**
 * C program to merge two sorted array in ascending order
 */

#include <stdio.h>
#define MAX_SIZE 100      // Maximum size of the array

int main()
{
    int arr1[MAX_SIZE], arr2[MAX_SIZE], mergeArray[MAX_SIZE * 2];
    int size1, size2, mergeSize;
    int index1, index2, mergeIndex;
    int i;
     
    /* Input size of first array */
    printf("Enter the size of first array : ");
    scanf("%d", &size1);

    /* Input elements in first array */
    printf("Enter elements in first array : ");
    for(i=0; i<size1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    /* Input size of second array */
    printf("\nEnter the size of second array : ");
    scanf("%d", &size2);

    /* Input elements in second array */
    printf("Enter elements in second array : ");
    for(i=0; i<size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    

















    return 0;

}    
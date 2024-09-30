#include <stdio.h>
#define MAX_SIZE 100


int main(){
    int n;
    int i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i] % 2 == 0)
        {
            even[evenCount++] = arr[i];
        }
        else
        {
            odd[oddCount++] = arr[i];   
        }
    }

    printf("Even elements: ");
    for (int i = 0; i < evenCount; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    // Print the odd array
    printf("Odd elements: ");
    for (int i = 0; i < oddCount; i++) 
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}    
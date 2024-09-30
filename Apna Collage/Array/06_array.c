#include <stdio.h>

int main(){
    int arr[] = { 20,30,40,50,60,70,80 };
    int *j, *k;

    j = &arr[2];
    k = ( arr + 2);

    if( j == k){
        printf("The two pointers have same location\n");
    }
    else{
        printf("The two pointers have different location\n");
    }
    printf("value is %u\n",*(arr + 2));

    return 0;
}
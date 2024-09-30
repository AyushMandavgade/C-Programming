#include<stdio.h>

int main(){
    int age1 = 22;
    int age2 = 24;

    int *ptr1 = &age1;
    int *ptr2 = &age2;

    printf("Difference = %u\n",(ptr1 - ptr2));
    printf("camparision = %u\n",ptr1 == ptr2);




    return 0;
}
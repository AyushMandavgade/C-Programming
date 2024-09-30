// Write a C program to input length and width of a rectangle and calculate perimeter of the rectangle

#include <stdio.h>

int main(){

    int length;
    int breadth;
    int perimeter;

    printf("Enter the length of rectangle :");
    scanf("%d",&length);
    printf("Enter the breadth of rectangle :");
    scanf("%d",&breadth);

    perimeter = 2 * (length + breadth);

    printf("perimeter of rectangle is %d",perimeter);

    return 0;
}
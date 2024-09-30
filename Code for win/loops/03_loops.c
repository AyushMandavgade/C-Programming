/*Write a C program to print alphabets from a to z using for loop*/

#include <stdio.h>

int main()
{

    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    }
    return 0;
}
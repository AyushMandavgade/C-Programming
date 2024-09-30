#include <stdio.h>

int main()
{
    int age;
    int i;

    for (i = 0; i < 10; i++)
    {
        printf("Enter your age :");
        scanf("%d", &age);

        if (age > 10)
        {
            break;
        }
    }
    return 0;
}  
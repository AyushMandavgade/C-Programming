// C program to calculate total, average and percentage of five subjects

#include <stdio.h>

int main()
{
    float eng, phy, chem, math, comp; 
    float total, average, percentage;

    printf("Enter marks of five subjects: \n");
    scanf("%f%f%f%f%f", &eng, &phy, &chem, &math, &comp);

    /* Calculate total, average and percentage */
    total = eng + phy + chem + math + comp;
    average = total / 5.0;
    percentage = (total / 500.0) * 100;

    printf("Total marks = %f\n", total);
    printf("Average marks = %f\n", average);
    printf("Percentage = %f", percentage);

    return 0;
}
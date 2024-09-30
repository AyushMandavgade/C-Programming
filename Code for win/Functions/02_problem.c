// Write a C program to input radius of circle from user and find diameter, circumference and area of the given
//  circle using function

#include <stdio.h>
#include<math.h>

double getdiameter(double radius);
double getcircumference(double radius);
double getarea(double radius);

int main(){
    
    float radius, dia, circ, area;

    printf("Enter the radius of the circle :");
    scanf("%f",&radius);

    dia = getdiameter(radius);
    circ = getcircumference(radius);
    area = getarea(radius);

    printf("diameter is %.2f units\n",dia);
    printf("circumference is %.2f units\n",circ);
    printf("area is %.2f units\n",area);

    return 0;
}

double getdiameter(double radius)
{
    return (2 * radius);
}

double getcircumference(double radius)
{
    return (2 * 3.14 * radius);
}

double getarea(double radius)
{
    return(3.14 * radius * radius);
}
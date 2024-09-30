// Write a programme to calculate the final prices if 3 products with 18% of GST included in them 


#include <stdio.h>

int main(){
    float price[3];

    printf("Enter 3 prices :");
    scanf("%f %f %f",&price[0],&price[1],&price[2]);
    // scanf("%f",&price[0]);
    // scanf("%f",&price[1]);
    // scanf("%f",&price[2]);

    printf("Total price 1 :%f\n", price[0]+(0.18*price[0]));
    printf("Total price 2 :%f\n", price[1]+(0.18*price[1]));
    printf("Total price 3 :%f\n", price[2]+(0.18*price[2]));

    return 0;
}
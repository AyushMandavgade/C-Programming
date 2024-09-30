#include <stdio.h>

void calculateprice(float value);

int main(){
    float value = 200.0;
    calculateprice(value);
    return 0;
}

void calculateprice(float value){
    value = value + (0.18* value);
    printf("The price is \n %f", value);
}
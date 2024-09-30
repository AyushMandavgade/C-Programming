#include <stdio.h>

int main(){
    int i = 3, *x;
    int j = 4, *y;
    int k = 5, *z;

    printf("The value of i is %d\n",i);
    printf("The value of j is %d\n",j);
    printf("The value of k is %d\n",k);

    x = &i;
    y = &j;
    z = &k;

    printf("The original address of x is %u\n",x);
    printf("The original address of y is %u\n",y);
    printf("The original address of z is %u\n",z);

    x++;
    y++;
    z++;

    printf("The new address of x is %u\n",x);
    printf("The new address of y is %u\n",y);
    printf("The new address of z is %u\n",z);


    return 0;
}
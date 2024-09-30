#include <stdio.h>

int main(){
    char maths,chem,phy,eng,evs;
    int sum;
    printf("Enter the marks of 5 subjects :");
    scanf("%d %d %d %d %d",&maths,&chem,&phy,&eng,&evs);

    sum = maths +chem + phy + eng + evs;
    printf("%d",sum);
    return 0;
}
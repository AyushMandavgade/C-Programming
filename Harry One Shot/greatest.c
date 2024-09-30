#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter 3 integers : ");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b && a>c){
        printf("The greatest of all is %d\n", a);
    }

    if(b>a && b>c){
        printf("The greatest of all is %d\n", b);
    }

    if(c>a && c>b){
        printf("The greatest of all numbers is %d\n", c);
    }


    return 0;
}
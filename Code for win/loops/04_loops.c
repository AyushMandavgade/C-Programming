/*Write a C program to print all even numbers from 1 to n using for loop*/
 

#include <stdio.h>

int main(){
    
    int i;
    int num;

    printf("Enter the last number :");
    scanf("%d",&num);

    printf("The even numbers form 1 to %d are\n",num);

    for(i=1; i<=num;i++){
        if(i%2 ==0){
            printf("%d\n",i);
        }
    }


    return 0;
}
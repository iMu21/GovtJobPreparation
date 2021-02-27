#include<stdio.h>

void main()
{
    printf("Enter the number: ");
    int Number;
    scanf("%d",&Number);
    if(Number%2==0){
        printf("The number is even.\n");
    }
    else{
        printf("The number is odd.\n");
    }
}

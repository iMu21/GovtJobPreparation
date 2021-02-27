#include<stdio.h>

long long int factorial(long long int Number){
if(Number==1){
    return 1;
}
if(Number==0){
    return 0;
}
return Number*factorial(Number-1);
}


void main()
{
    printf("Enter the number: ");
    long long int Number;
    scanf("%lld",&Number);
    printf("Factorial of the number %lld is %lld .\n",Number,factorial(Number));
}

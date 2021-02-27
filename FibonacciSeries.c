#include<stdio.h>

void Fibonacci(int length){
long long int a=0,b=1,c;
length=length-1;
printf("1");
while(length){
    printf(" %d",a+b);
    c=b;
    b=a+b;
    a=c;
    length=length-1;
}
printf("\n");
return;
}

void main()
{
    printf("Enter the length of fibonacci series: ");
    int length;
    scanf("%d",&length);
    Fibonacci(length);
}

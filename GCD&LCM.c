#include<stdio.h>

int gcd(int Num1,int Num2){
 if(Num1==0){
    return Num2;
 }
 return gcd(Num2%Num1,Num1);
}

int lcm(int Num1,int Num2){
 return (Num1*Num2)/gcd(Num1,Num2);
}

void main()
{
    printf("Enter two numbers: ");
    int Num1,Num2;
    scanf("%d %d",&Num1,&Num2);
    printf("GCD of %d & %d is %d\n",Num1,Num2,gcd(Num1,Num2));
    printf("LCM of %d & %d is %d\n",Num1,Num2,lcm(Num1,Num2));
}

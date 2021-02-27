#include<stdio.h>
#include<stdbool.h>

bool isPrime(int Number){
int i;
for(i=2;i*i<=Number;i++){
    if(Number%i==0){
        return false;
    }
}
return true;
}

void main()
{
    int Number;
    printf("Enter the number: ");
    scanf("%d",&Number);
    if(isPrime(Number)){
        printf("%d is a prime number.\n",Number);
    }
    else{
        printf("%d is not a prime number.\n",Number);
    }

}

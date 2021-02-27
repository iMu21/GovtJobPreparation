#include<stdio.h>


int reverse(int Number){

int curr=Number,Reverse=0;

while(curr){
    Reverse=(Reverse*10)+curr%10;
    curr=curr/10;
}

return Reverse;

}

void main()
{
    printf("Enter the number: ");
    int Number;
    scanf("%d",&Number);
    printf("Reverse of the number %d is %d.\n",Number,reverse(Number));
}

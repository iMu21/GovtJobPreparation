#include<stdio.h>
#include<stdbool.h>


bool isPalindrom(int Number){

int curr=Number,Reverse=0;

while(curr){
    Reverse=(Reverse*10)+curr%10;
    curr=curr/10;
}

if(Reverse==Number){return true;}

return false;

}

void main()
{
    printf("Enter the number: ");
    int Number;
    scanf("%d",&Number);
    if(isPalindrom(Number)){
        printf("The number %d is a palindrom.\n",Number);
    }
    else{
        printf("The number %d is not a palindrom.\n",Number);
    }
}

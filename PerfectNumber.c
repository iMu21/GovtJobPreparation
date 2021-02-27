#include<stdio.h>
#include<stdbool.h>
/*
In mathematics, a perfect number is a positive integer
that is equal to the sum of its positive divisors,
 excluding the number itself.
*/
bool isPerfect(int Number){
int checker=0,i;
for(i=2;i*i<=Number;i++){
    if(Number%i==0){
        if(i*i==Number){
            checker=checker+i;
        }
        else{
            checker=checker+i+Number/i;
        }
    }
}
if(checker+1==Number){return true;}
return false;
}

void main()
{
    printf("Enter the number: ");
    int Number;
    scanf("%d",&Number);
    if(isPerfect(Number)){
        printf("The number %d is a perfect.\n",Number);
    }
    else{
        printf("The number %d is not a perfect.\n",Number);
    }
}

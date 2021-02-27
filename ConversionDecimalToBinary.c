#include<stdio.h>
#include<string.h>

char Binary[100001];

void DecimalToBinary(int Decimal){
char curr[100001];
int i=0,j=0;
while(Decimal){
    if(Decimal%2==1){
        curr[i]='1';
    }
    else{
        curr[i]='0';
    }
    i=i+1;
    Decimal=Decimal/2;
}
i=i-1;

while(i!=-1){
    Binary[j]=curr[i];
    i=i-1;
    j=j+1;
}
}

void main(){
int Decimal;
scanf("%d",&Decimal);
DecimalToBinary(Decimal);
printf("The binary value of the decimal value %d is %s\n",Decimal,Binary);
}



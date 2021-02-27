#include<stdio.h>
#include<string.h>

int BinaryToDecimal(char Binary[]){
int PowerOfTwo=1,i,Decimal=0;
for(i=strlen(Binary)-1;0<=i;i--){
    if(Binary[i]=='1'){
        Decimal=Decimal+PowerOfTwo;
    }
    PowerOfTwo=PowerOfTwo*2;
}
 return Decimal;

}

void main(){
char Binary[100001];
gets(Binary);
int Decimal= BinaryToDecimal(Binary);
printf("The decimal value of the binary value %s is %d\n",Binary,Decimal);
}


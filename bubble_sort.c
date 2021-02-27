#include <stdio.h>
int main(){

int n,i,j,c;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++)
{
    for(j=0;j<n-2;j++)
    {
        if(arr[j]>arr[j+1])
        {
            c=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=c;
        }
    }
}

for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}

return 0;
}

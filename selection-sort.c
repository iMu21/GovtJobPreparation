#include <stdio.h>
int main(){

int n,i,j,mini,c;
printf("Enter the size of the array: ");
scanf("%d",&n);
int arr[n];
printf("Enter the array: ");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(i=0;i<n-1;i++)
{
    mini=i;
    for(j=i+1;j<n;j++)
    {
        if(arr[mini]>arr[j])
        {
            mini=j;
        }
    }
            c=arr[mini];
            arr[mini]=arr[i];
            arr[i]=c;
}

for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}

return 0;
}

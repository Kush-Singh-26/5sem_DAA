#include<stdio.h>

int main()
{
    printf("Enter the size of the array : ");
    int n; scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++)
        scanf("%d",&a[i]);
    int prefixSum[n];
    prefixSum[0] = a[0];
    for(int i =1;i<n;i++)
    {
        prefixSum[i] = a[i] + prefixSum[i-1];
    }

    printf("Orginial Array : ");
    for(int i =0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n PrefixSum Array : ");
    for(int i =0;i<n;i++)
        printf("%d ",prefixSum[i]);
    printf("\n");
    return 0;
}
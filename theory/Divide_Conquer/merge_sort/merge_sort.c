#include<stdio.h>

void merge(int a[], int low, int high, int mid)
{
    int b[high-low+1];
    int l = low;
    int r = mid+1;
    int i = 0;

    while(l<=mid && r<=high)
    {
        if(a[l] <= a[r])
            b[i++] = a[l++];
        else
            b[i++] = a[r++];
        
    }

    while(l<=mid)
        b[i++] = a[l++];
    
    while(r<=high)
        b[i++] = a[r++];
    
    for(int j = low;j<=high;j++)
        a[j] = b[j-low];
}

void mergeSort(int a[], int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, high, mid);
    }
}

int main()
{
    int a[5] = {10, 9, 2, 12, 2};
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    mergeSort(a, 0, 4);
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
}
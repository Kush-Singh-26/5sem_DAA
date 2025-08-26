#include<stdio.h>

void insertion_sort(int a[], int n)
{
    for(int i = 1;i<n;i++)
    {
        int item = a[i];
        int j = i-1;
        while((j>=0) && (item < a[j]))
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = item;
    }
}

int main()
{
    int a[5] = {10, 9, 8, 7, 5};
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    insertion_sort(a,5);
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
}
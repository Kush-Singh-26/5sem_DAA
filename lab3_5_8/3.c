#include<stdio.h>
#include<time.h>
#include<stdlib.h>

void merge(int a[], int low, int mid, int high)
{
    int temp[high - low + 1];
    int l = low;
    int r = mid+1;
    int i = 0;
    while(l <= mid && r <= high)
    {
        if(a[l] < a[r])
            temp[i++] = a[l++];
        else
            temp[i++] = a[r++];
    }

    while(l <= mid)
        temp[i++] = a[l++];
    
    while(r <= high)
        temp[i++] = a[r++];
    
    for(int j = low; j<=high;j++)
        a[j] = temp[j-low];
}

void mergeSort(int a[], int low, int high)
{
    if(low != high)
    {
        int mid = (low+high)/2;
        mergeSort(a, low, mid);
        mergeSort(a, mid+1, high);
        merge(a, low, mid, high);
    }
}

int main() {
    printf("Enter the number of elements in the array : ");
    int n; scanf("%d",&n);
    int arr[n];
    clock_t start, end;
    double cpuTimeUsed;

    for (int i = 0; i < n; i++) arr[i] = i;
    start = clock();
    mergeSort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best Case: %f seconds\n", cpuTimeUsed);

    for (int i = 0; i < n; i++) arr[i] = n - i;
    start = clock();
    mergeSort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst Case: %f seconds\n", cpuTimeUsed);

    srand(time(NULL));
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    start = clock();
    mergeSort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average Case: %f seconds\n", cpuTimeUsed);

    return 0;
}
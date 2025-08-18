#include<stdio.h>
#include<time.h>
#include<stdlib.h>

// int partition(int a[], int low, int high)
// {
//     int i = low+1;
//     int j = high;
//     int item = a[low];
//     while(i<=j)
//     {
//         while(a[i] < item && i<= high)
//             i++;
//         while(a[j] > item && j >= low)
//             j--;
        
//         if(i < j)
//         {
//             int temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }

//         else
//         {
//             int temp = a[low];
//             a[low] = a[j];
//             a[j] = temp;

//             return j;
//         }
//     }
// }

// void quicksort(int a[], int low, int high)
// {
//     if(low < high)
//     {
//         int q = partition(a, low, high);
//         quicksort(a, low, q-1);
//         quicksort(a, q+1, high);
//     }
// }

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int i = low;
    int j = high;
    int pivot = a[low];
    while(i<j)
    {
        while(i <= high-1 && a[i] <= pivot)
            i++;
        while(j >= low+1 && a[j] > pivot)
            j--;
        if(i<j)
            swap(&a[i],&a[j]);
    }
    swap(&a[low],&a[j]);
    return j;  
        
}
void quicksort(int a[], int low, int high)
{
    if(low < high)
    {
        int pIndex = partition(a,low,high);
        quicksort(a, low, pIndex - 1);
        quicksort(a, pIndex+1, high);
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
    quicksort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best Case: %f seconds\n", cpuTimeUsed);

    for (int i = 0; i < n; i++) arr[i] = n - i;
    start = clock();
    quicksort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst Case: %f seconds\n", cpuTimeUsed);

    srand(time(NULL));
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    start = clock();
    quicksort(arr, 0, n-1);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average Case: %f seconds\n", cpuTimeUsed);

    return 0;
}
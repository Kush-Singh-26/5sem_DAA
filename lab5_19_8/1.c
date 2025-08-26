#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int a[], int i, int n)
{
    int l = 2*i +1;
    int r = 2*i +2;
    int largest = i;


    if(l < n && a[largest] < a[l])
        largest = l;
    
    if(r < n && a[largest] < a[r])
        largest = r;

    if(i != largest)
    {
        swap(&a[largest], &a[i]);
        heapify(a, largest, n);
    }
}

void buildHeap(int a[], int n)
{
    for(int i = n/2 - 1; i>= 0; i--)
    {
        heapify(a, i, n);
    }
}

void heapSort(int a[], int n)
{
    buildHeap(a, n);

    while(n>1)
    {
        swap(&a[0], &a[n-1]);
        n--;
        heapify(a, 0, n);
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
    heapSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best Case: %f seconds\n", cpuTimeUsed);

    for (int i = 0; i < n; i++) arr[i] = n - i;
    start = clock();
    heapSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst Case: %f seconds\n", cpuTimeUsed);

    srand(time(NULL));
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    start = clock();
    heapSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average Case: %f seconds\n", cpuTimeUsed);

    return 0;
}
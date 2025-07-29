#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    for (int j = 1; j < n; j++) {
        int key = arr[j];
        int i = j - 1;
        while ((i >= 0) && arr[i] > key) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = key;
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
    insertionSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Best Case: %f seconds\n", cpuTimeUsed);

    for (int i = 0; i < n; i++) arr[i] = n - i;
    start = clock();
    insertionSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Worst Case: %f seconds\n", cpuTimeUsed);

    srand(time(NULL));
    for (int i = 0; i < n; i++) arr[i] = rand() % n;
    start = clock();
    insertionSort(arr, n);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Average Case: %f seconds\n", cpuTimeUsed);

    return 0;
}
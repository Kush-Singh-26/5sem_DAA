#include <stdio.h>
#include <time.h>

int binarySearch(int a[], int low, int high, int key)
{
    if (low > high)
            return -1;
    else
    {
        int mid = (low + high) / 2;

        if (a[mid] == key)
            return mid;

        else 
        {
            if (key < a[mid])
                return binarySearch(a, low, mid - 1, key);

            else 
                return binarySearch(a, mid + 1, high, key);
        }
    }
}

int main()
{
    printf("Enter the number of elements in the array : ");
    int n; scanf("%d",&n);
    int arr[n];
    int key;
    printf("Enter the key : ");
    scanf("%d",&key);
    clock_t start, end;
    double cpuTimeUsed;

    for (int i = 0; i < n; i++) arr[i] = i;
    start = clock();
    int idx = binarySearch(arr, 0, n-1, key);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time Taken: %f seconds\n", cpuTimeUsed);
    if(idx == -1)
    {
        printf("Not Found\n");
        return 0;
    }
    printf("%d found at %d index\n", key, idx);
    return 0;
}
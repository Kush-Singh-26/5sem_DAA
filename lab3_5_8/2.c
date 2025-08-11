#include<stdio.h>
#include<time.h>

int ternarySearch(int a[], int l,  int h, int key)
{
    if(l<=h)
    {
        int mid1 = l + (h-l)/3;
        int mid2 = h - (h-l)/3;
        if(key == a[mid1])
            return mid1;
        else if(key == a[mid2])
            return mid2;
        
        else if(key < a[mid1])
            return ternarySearch(a, l, mid1-1, key);
        
        else if(key < a[mid2])
            return ternarySearch(a, mid1+1, mid2-1, key);
        
        else
            return ternarySearch(a, mid2+1, h, key);
    }

    else 
        return -1;
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
    int idx = ternarySearch(arr, 0, n-1, key);
    end = clock();
    cpuTimeUsed = ((double)(end - start)) / CLOCKS_PER_SEC;
    if(idx == -1)
    {
        printf("Not Found\n");
        return 0;
    }
    printf("%d found at %d index\n", key, idx);
    printf("Time Taken: %f seconds\n", cpuTimeUsed);
    return 0;
}
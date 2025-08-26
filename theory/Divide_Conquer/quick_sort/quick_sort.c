#include <stdio.h>

int partition(int a[], int low, int high)
{
    int item = a[low];
    int i = low + 1;
    int j = high;
    while (1)
    {
        while (a[i] < item)
            i++;
        while (a[j] > item)
            j--;
        if (i < j)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
        else
        {
            int temp = a[low];
            a[low] = a[j];
            a[j] = temp;

            return j;
        }
    }
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int q = partition(a, low, high);
        quickSort(a, low, q - 1);
        quickSort(a, q + 1, high);
    }
}

int main()
{
    int a[5] = {10, 9, 2, 12, 2};
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
    quickSort(a, 0, 4);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
}
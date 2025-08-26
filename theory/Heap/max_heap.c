#include<stdio.h>

int lchild(int i)
{
    return 2*i;
}

int rchild(int i)
{
    return 2*i + 1;
}

int parent(int i)
{
    return i/2;
}

void heapify(int a[], int i, int n)
{
    int l = lchild(i);
    int r = rchild(i);

    int largest = i;

    if(l < n && a[largest] < a[l])
        largest = l;
    if(r < n & a[largest] < a[r])
        largest = r;
    if(largest != i)
    {
        int temp = a[i];
        a[i] = a[largest];
        a[largest] = temp;

        heapify(a, largest, n);
    }
}

void buildHeap(int a[], int n)
{
    for(int i = n/2 - 1; i>=0; i--)
        heapify(a, i, n);
}

void heapSort(int a[], int n)
{
    buildHeap(a, n);

    while(n>1)
    {
        int temp = a[0];
        a[0] = a[n-1];
        a[n-1] = temp;

        n--;
        heapify(a, 0, n);
    }
}

int main()
{
    int a[5] = {10, 9, 2, 12, 2};
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
    heapSort(a, 5);
    for(int i = 0; i<5;i++)
        printf("%d ",a[i]);
    printf("\n");
}
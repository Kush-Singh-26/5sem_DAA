# Quick Sort

```c
Alogorithm partition(a, low, high)
{
    item = a[low];
    i = low+1;
    j = high;

    while(true) do
        while(a[i] < item)
            i = i+1;
        while(a[j] > itme)
            j = j-1;
        if(i < j) then
            swap(a[i], a[j]);
        else
        {
            swap(a[j], a[low]);
            return j;
        }
}
```


```c
Algorithm QuickSort(a, low, high)
{
    if(low < high) then
    {
        q = partition(a, low, high);
        QuickSort(a, low, q-1);
        QuickSort(a, q+1, high);
    }
}
```
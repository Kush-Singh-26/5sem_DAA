# Insertion Sort

```c
Algorithm InsertionSort(a,n)
{
    for j = 2 to n do
        item = a[j];
        i = j-1;
        while((1 <= i) && (a[i] > item))
        {
            a[i+1] = a[i];
            i = i-1;
        }
        a[i+1] = item;
}
```
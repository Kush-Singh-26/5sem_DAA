# Merge Sort

```c
Algorithm Merge(a, low, mid, high)
{
    i = 0;
    l = left;
    r = mid+1;

    while(l<= mid && r <= high)
    {
        if(a[l] <= a[r]) then
        {
            b[i] = a[l];
            i = i + 1;
            l = l + 1;
        }
        else
        {
            b[i] = a[r];
            i = i + 1;
            r = r + 1;
        }
    }

    while(l <= mid)
    {
        b[i] = a[l];
        i = i + 1;
        l = l + 1;
    }

    while(r <= high)
    {
        i = i + 1;
        r = r + 1;
    }

    for k = low to high do
        a[k] = b[k - low];
}
```

```c
Algorithm Merge_Sort(a, low, high)
{
    if(low < high)
    {
        mid = floor((l+h)/2);
        Merge_Sort(a, low, mid);
    Merge_Sort(a, mid+1, high);
    }
}
```
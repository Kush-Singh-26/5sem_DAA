# Heap

## MaxHeapify

```c
lchild(i)
{
    return 2*i
}

rchilf(i)
{
    return 2*i + 1;
}

parent(i)
{
    return floor(i/2);
}

heapify(a, i)
{
    l = lchild(i);
    r = rchild(i);
    largest = i;
    if(l <= heap-size(a) and a[l] > a[largest])
        largest = l;
    if(r <= heap-size(a) and a[r] > a[largest])
        largest = r;
    
    if(largest != i)
    {
        swap(a[largest], a[i]);
        heapify(a, largest);
    }
}
```

## BuildHeap

```c
BuildHeap(a)
{
    heap-size(a) = len(a);
    for(i = floor(n/2) to 1) do
        MaxHeapify(a, i);
}
```

### HeapSort

```c
HeapSort(a)
{
    BuildHeap(a);
    for i = len(a) to 2 do
        swap(a[i], a[1]);
        heap-size(a) = heap-size(a)-1;
        heapify(a, 1);
}
```

---

# Min Heap

- Just change the comparision conditions in heapify

- `if(l <= heap-size(a) and a[l] > a[largest])`
 to `if(l <= heap-size(a) and a[l] < a[largest])`
- `if(r <= heap-size(a) and a[r] > a[largest])`
 to `if(r <= heap-size(a) and a[r] < a[largest])`
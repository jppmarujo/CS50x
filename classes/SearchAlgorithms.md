# Search and sorting algorithms class
In week 2, David J. Malan starts talking about algorithms in a more profound manner. I'll try to summarize each one to shine some light on their differences. 

## Computational Complexity
When we talk about the complexity of an algorithm, we generally refer to the **worst-case scenario**.
We refer to this as O.

We sometimes also care about the **best-case scenario**.
We refer to this as Ω.

## Searching 

### Linear search

If there's an array of _n_ number of _ints_, we would have to look into each one, one after the other.
It would take, in the worst case, an _n_ number of times to get the int we want.

```
for each element in array
    if element you're looking for
        return true
return false
```

O : _n_

Ω : 1

### Binary search

Divide the problem each time in half, in order to have less steps before finding the _int_, or complete the algorithm.

```
look at middle of sorted array
if element you're looking for
    return true 
else if element is to left
    search left half of array
else if element is to right
    search right half of array
else
    return false
```

O : _log n_

Ω : 1

## Sorting

Other than search for an element in an array, we might need to sort that array to make some order out of the confusion. 
There are various methods to do it, some more efficient than others. 

### Selection sort

Find the **smallest** unsorted element in an array and swap it with the **first** unsorted element of that array.
O : O(n²)

Ω : n²

### Bubble sort

Swap **adjacent pairs** of elements if they are out of order, effectively "bubbling" larger elements to the right and smaller ones to the left. 

O : n²

Ω : n

### Insertion sort

Proceed once through the array from left-to-right, **shifting** elements as necessary to insert each element into its correct place.

O : n²

Ω : n

### Merge sort

**Split** the full array into subarrays, then **merge** those subarrays back together in the correct order.

O : _n log n_

Ω : _n log n_

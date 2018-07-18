# Search and sorting algorithms class
In week 2, David J. Malan starts talking about algorithms in a more profound manner. I'll try to summarize each one to shine some light on their differences. 

## Searching 

### Linear search

If there's an array of _n_ number of _ints_, we would have to look into each one, one after the other.
It would take, in the worst case, an _n_ number of times to get the int we want.

_for each element in array
    if element you're looking for
        return true
return false_

## Binary search

Divide the problem each time in half, in order to have less steps before finding the _int_, or complete the algorithm.

_look at middle of sorted array
if element you're looking for
    return true 
else if element is to left
    search left half of array
else if element is to right
    search right half of array
else
    return false_


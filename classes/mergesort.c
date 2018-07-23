#include <stdio.h>

// Function for mergeSort
void mergeSort(int [], int, int);

// Function for merge
void merge(int[], int, int, int);

int main (void)
{
    int a[20], i, n;
    printf("Enter the number limit: \n");
    scanf("%d", &n);

    printf("Enter the numbers: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    mergeSort(a, 0, n - 1);

    printf("After the merge sort: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n");
}

void mergeSort (int a[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        mergeSort(a, low, mid); // repeats until low = high, so it sorts the left side;
        mergeSort(a, mid + 1, high); // repeats until low = high, so it sorts the right side;
        merge(a, low, mid, high); // merges in the correct order;
    }
}

void merge(int a[], int low, int mid, int high)
{
    int lo = low, i = low, k, mi = mid + 1, temp[20];

    while(lo <= mid && mi <= high)
    {
        if (a[lo] <= a[mi])
        {
            temp[i] = a[lo];
            lo++;
        }

        else
        {
            temp[i] = a[mi];
            mi++;
        }

        i++;
    }

    if (lo > mid)
    {
        for (k = lo; k <= mid; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }

    else
    {
        for (k = lo; k <= mid; k++)
        {
            temp[i] = a[k];
            i++;
        }
    }

    for (k = low; k <= high; k++)
    {
        a[k] = temp[k];
    }
}
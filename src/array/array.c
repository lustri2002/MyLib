#include <MyLib/array/array.h>

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void mylib_print(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", v[i]);
    }
}

void mylib_insertion_sort(inout int v[], in int n)
{
    for (unsigned int i = 1; i < n; i++)
    {
        int value = v[i];
        unsigned int j = i - 1;
        while (j >= 0 && v[j] > value)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = value;
    }
}

void mylib_fillarray(inout int v[], in int n, in int max)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        v[i] = rand() % max;
    }
}

void mylib_swapint(inout int *a, inout int *b)
{
    int app = *a;
    *a = *b;
    *b = app;
}

void mylib_partition(inout int a[], in int n)
{
    int pivot = a[0];
    int memo = n - 1;
    printf("pivot: %d \n\n", pivot);
    for (int i = n - 1; i > 0; i--)
    {
        if (a[i] > pivot)
        {
            mylib_swapint(&a[i], &a[memo]);
            memo--;
        }
    }
    mylib_swapint(&a[0], &a[memo]);
}
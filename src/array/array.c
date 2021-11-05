#include <MyLib/array/array.h>

#include <stdio.h>
#include <ctime>
#include <stdlib.h>

void mylib_print(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
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
    for(int i = 0; i < n; i++)
    {
        v[i] = rand()%max;
    }
}
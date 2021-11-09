#ifndef MYLIB_ARRAY_H
#define MYLIB_ARRAY_H

#define in
#define out
#define inout

void mylib_print(in int v[], in int n);
void mylib_insertion_sort(inout int v[], in int n);
void mylib_fillarray(inout int v[], in int n, in int max);
void mylib_swapint(inout int *a, inout int *b);
void mylib_partition(inout int a[], in int n);

#endif //MYLIB_ARRAY_H

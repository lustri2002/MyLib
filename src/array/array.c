#include <MyLib/array/array.h>

#include <stdio.h>

void mylib_print(int v[], int n){
    for(int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
    }
}


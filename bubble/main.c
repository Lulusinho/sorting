#include<stdio.h>
#include<stdlib.h>
#include "sorting.c"

int main(){
    int array[size];

    for (int i = size; i >0; i--)
    {
        array[size - i] = i;
    }

    sorting(array);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}
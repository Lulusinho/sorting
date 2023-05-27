#include <stdio.h>
#include <stdlib.h>
#include "merge.c"

int main()
{
    int array[size];

    for (int i = size; i > 0; i--)
    {
        array[size - i] = i;
    }
    printf("Number in descending order:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n____________________________________________________\n");

    mergeSort(array, 0, size - 1);

    printf("Ordered numbers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}
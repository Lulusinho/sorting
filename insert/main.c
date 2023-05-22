#include<stdio.h>
#include<stdlib.h>
#include "insert.c"


int main(){
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

    sorting(array);

    printf("Ordered numbers:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }


    return 0;
}
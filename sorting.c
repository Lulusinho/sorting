#include <stdio.h>
#include <stdlib.h>
#define size 100
void sorting(int *);

void sorting(int *array)
{

    for (int i = 0; i < size; i++)
    {
        int greater = array[i];
        for (i = 0; i < size; i++)
        {
            if (greater > array[i])
            {
                /* code */
            }
        }
    }
}
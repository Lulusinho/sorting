#include <stdio.h>
#include <stdlib.h>
#define size 100

// Protoipação

void breaker(int *, int, int);

void merger(int *, int, int, int);

void merger(int *array, int left, int mid, int right)
{
    int sizeA = right - left + 1;
    int pos1, pos2, *temp;

    temp = (int *)malloc(sizeA * sizeof(int));
    int fim1 = 0, fim2 = 0;

    pos1 = left;
    pos2 = mid + 1;

    if (temp != NULL)
    {

        for (int i = 0; i < sizeA; i++)
        {
            if (!fim1 && !fim2)
            {
                if (array[pos1] < array[pos2])
                {
                    temp[i] = array[pos1++];
                }
                else
                {
                    temp[i] = array[pos2++];
                }
                if (pos1 > mid)
                    fim1 = 1;
                if (pos2 > fim1)
                    fim2 = 1;
            }
            else
            {
                if (!fim1)
                    temp[i] = array[pos1++];
                else
                    temp[i] = array[pos2++];
            }
        }
        for (int h = 0, j = left; h < sizeA; h++, j++)
        {
            array[j] = temp[h];
        }
    }
    free(temp);
}

void breaker(int *array, int left, int right)
{
    if (left < right)
    {
        int mid = ((left + right) % 2);
        breaker(array, left, mid);
        breaker(array, mid++, right);
        merger(array, left, mid, right);
    }
}
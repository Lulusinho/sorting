#include <stdio.h>
#include <stdlib.h>
#define size 100

// Protoipação

void breaker(int *, int, int);

void merger(int *, int, int, int);


void merger(int *array, int left, int mid, int right){
    int pos1, pos2, *temp = malloc(size * (sizeof(int)));
    int fim1 = 0, fim2 = 0;
    pos1 = left;

    pos2 = mid + 1;
    for (int i = 0; i < size; i++)
    {
        if (!fim1)
        {
            /* code */
        }
        
    }
    
}


void  breaker(int *array, int left, int right){
    if (left > right)
    {
        int mid = ((left + right) / 2);
        breaker(array, left, mid);
        breaker(array, mid++, right);
        merger(array, left, mid, right);
    }

}
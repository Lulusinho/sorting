#include <stdio.h>
#include <stdlib.h>
#define size 100

// Protoipação

void sorting(int *);

void sorting(int *array)
{
    int aux;
    // Percorre tods os numeros do vetor
    for (int i = 0; i < size - 1; i++)
    {
        // este for é usado para percorrer apenas os lavores que não foram comparados com os outros
        for (int h = 0; h < size - 1; h++)
        {
            if (array[h] > array[h + 1]) //
            {
                aux = array[h];
                array[h] = array[h + 1];
                array[h + 1] = aux;
            }
        }
    }
}
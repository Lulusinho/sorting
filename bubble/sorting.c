#include <stdio.h>
#include <stdlib.h>
#define size 100

//Protoipação

void sorting(int *);

void sorting(int *array)
{
    //Percorre tods os numeros do vetor
    for (int i = 0; i < size; i++)
    {
        //este for é usado para percorrer apenas os lavores que não foram comparados com os outros
        for (int h = 0; h < size - i; h++)
        {
            if (array[h] > array[h+1])    // 
            {
                int aux = array[h];
                array[h] = array[h+1];
                array[h + 1] = aux;
            }
        }
    }
}
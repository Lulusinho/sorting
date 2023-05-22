#include <stdio.h>
#include <stdlib.h>
#define size 100

void sorting(int *);

//Este método compara o valor de key com os números á esquerda 

void sorting(int *array)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];//valor que será comparado com o resto do vetor
        int j = i - 1;

        while (j >= 0 && array[j] > key)//Só vai entrar neste while caso o número á esquerda seja menor que o a KEY
        {
            int swap = array[j + 1];
            array[j + 1] = array[j];
            array[j] = swap;
            j--;
        }//A interação de troca irá acontecer enquanto os números forem maiores e não chegar no final do vetor
        
    }
}
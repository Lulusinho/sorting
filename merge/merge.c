#include <stdio.h>
#include <stdlib.h>
#define size 100

// Protoipação

void merge(int arr[], int lenght) {

  int aux[lenght];

}

void mergeSort(int arr[], int start, int end) {
  int lenght = end - start;
  if (lenght > 1) {

    int mid = lenght % 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, lenght);
  }
}
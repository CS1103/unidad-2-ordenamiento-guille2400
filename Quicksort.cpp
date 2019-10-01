//
// Created by sanch on 10/1/2019.
//

#include "Quicksort.h"
using  namespace std;

template <typename T>
auto swap(T* a, T* b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

/* Toma el ultimo elemento como pivote, toma los menores al
 lado izquiero  y los mayores al lado derecho*/
template <typename T>
auto partition (vector<T> &vector1, T low, T high)
{
    T pivote = vector1[high]; // pivote
    T i = (low - 1); // Index del elemento menor

    for (T j = low; j <= high - 1; j++)
    {
        // Si el elemento es menor al pivote
        if (vector1[j] < pivote)
        {
            i++; // Incrementa el index del menor elemento
            swap(&vector1[i], &vector1[j]);
        }
    }
    swap(&vector1[i + 1], &vector1[high]);
    return (i + 1);
}

/* La principal fucion que hara el quicksort */
template <typename T>
auto quickSort (vector<T> &vector1, T low, T high)
{
    if (low < high)
    {
        /* pi es el index de la particion */
        T pi = partition(vector1, low, high);

        /* Separa los elementos ordenados
        antes de la particion y despues de la particion*/
        quickSort(vector1, low, pi - 1);
        quickSort(vector1, pi + 1, high);
    }
}
#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

using  namespace std;

template <typename T>
auto lectura()
{
        ifstream infile("Prueba.txt");
        T line;
        vector<T> Numeros;
        T numero;
        while (getline(infile, line))
        {
            istringstream iss(line);

            if (iss >>numero)
                Numeros.push_back(numero);
        }

        for (auto it = Numeros.begin(); it != Numeros.end(); ++it)
            cout << " "<< *it;
        cout << endl;
}
template <typename T>
auto ShellSort(vector<T> &vector1, T n)
{
    T i, j, k, temp;
    // Gap 'i' between index of the element to be compared, initially n/2.
    for(i = n/2; i > 0; i = i/2)
    {
        for(j = i; j < n; j++)
        {
            for(k = j-i; k >= 0; k = k-i)
            {
                // If value at higher index is greater, then break the loop.
                if(vector1[k+i] >= vector1[k])
                    break;
                    // Switch the values otherwise.
                else
                {
                    temp = vector1[k];
                    vector1[k] = vector1[k+i];
                    vector1[k+i] = temp;
                }
            }
        }
    }
}

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
T partition (vector<T> &vector1, T low, T high)
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
T quickSort (vector<T> &vector1, T low, T high)
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



template <typename T>
void imprimir(const vector<T> &vectorsito)
{
    for( int ax = 0; ax< vectorsito.size(); ax++)
    {
        cout << vectorsito[ax]<< " ";
    }
}


int main()
{

    return 0;
}

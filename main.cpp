#include <iostream>
#include <vector>
#include <fstream>
using  namespace std;


void lectura()
{   ifstream archivo;
    string texto;
    archivo.open("Prueba.txt", ios::in); //Abrimos el archivo en modo lectura
    if (archivo.fail())
    {cout<< "No se pudo abrir el archivo";
        exit(1);
    }

    while(!archivo.eof()) //Mientras no sea el final el archivo
    {
        getline(archivo, texto);
        cout << texto << endl;
    }
    archivo.close();

}
template <typename T>
void ShellSort(vector<T> vector1, T n)
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
void quickSort(vector<T> &vectorsito)
{

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
{   lectura();

    system("pause");
    return 0;
}

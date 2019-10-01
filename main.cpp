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

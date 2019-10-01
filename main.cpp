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

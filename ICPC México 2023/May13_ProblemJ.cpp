#include <iostream>
#include <unordered_map>
 
using namespace std;

int main()
{   
    int cantidadElementos;
    int cantidadPruebas;
    int numeroAuxiliar;
    int numeros;
    int resultado = 0;
    int parametroInicial;
    int parametroFinal;
    int suma;
    cin >> cantidadElementos;
    cin >> cantidadPruebas;

    unordered_map <int,int> ump;

    for (int i=1; i <= cantidadElementos; i++){
        cin >> numeroAuxiliar;
        ump.insert({i,numeroAuxiliar});
    }

    for (int i = 0; i < cantidadPruebas; i++){
        cin >> parametroInicial;
        cin >> parametroFinal;

        resultado = 0;
        for (int j = parametroInicial; j <= parametroFinal; j++){
            suma = 0;
            for (int k = j + 1; k <= parametroFinal; k++){
                suma += ump.at(k);
            }
            resultado += ump.at(j) * suma;
        }

        cout << resultado << endl;
    }
    return 0;
}

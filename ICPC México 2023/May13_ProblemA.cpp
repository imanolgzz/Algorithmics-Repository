#include <set>
#include <unordered_set>
#include <iostream>
#include <string>
 
using namespace std;

int main()
{
    int nombres;
    int palabras;
    int uniqueNames;
    string nombre;
    string iniciales;
    unordered_multiset <string> nombresUnicos;
    unordered_multiset <string> nombresRepetidos;

    cin >> nombres;

    for (int i=0; i<nombres; i++){
        iniciales = "";
        cin >> palabras;
        for (int j = 0; j < palabras; j++){
            cin >> nombre;
            iniciales += nombre[0];
        }
    if (nombresUnicos.find(iniciales) == nombresUnicos.end() && nombresRepetidos.find(iniciales) == nombresRepetidos.end()){
            nombresUnicos.insert(iniciales);
        } else {
            nombresRepetidos.insert(iniciales);
            nombresUnicos.erase(iniciales);           
        }
    }
    uniqueNames = nombresUnicos.size();
    cout << int(uniqueNames) << endl;

    // Return multiset size

    return 0;
}
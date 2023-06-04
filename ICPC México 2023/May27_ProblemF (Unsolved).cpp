#include <iostream>
#include <cmath>
#include <vector>
 
using namespace std;
 
int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    int casillas;
    int potencia;
    int fibonacciActual;
    int resultado;
    vector <int> fibonacci;
    cin >> casillas;
    cin >> potencia;

    fibonacci.push_back(0);
    fibonacci.push_back(1);

    for(int i = 0; i < casillas; i++){
        resultado += pow(fibonacci.back(), potencia);
        fibonacciActual = fibonacci.back() + fibonacci[fibonacci.size()-2];
        fibonacci.push_back(fibonacciActual);  
    }

    cout << resultado <<endl;



    return 0;
}
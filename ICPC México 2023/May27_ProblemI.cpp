#include <iostream>

using namespace std;

int main()
{
    int KetilMan;
    int CanuteMan;
    int RKCanute;
    int resultado;

    cin >> KetilMan;
    cin >> CanuteMan;
    cin >> RKCanute;

    resultado = KetilMan / RKCanute - CanuteMan;

    if (resultado >= 0 ){
        cout << "Iron fist Ketil" <<endl;
    } else {
        cout << "King Canute" << endl;
    }

    return 0;
}
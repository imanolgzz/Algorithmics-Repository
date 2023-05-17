#include <iostream>
 
using namespace std;
 
int main()
{

    int N, K, L;
    int output=0;
    cin >> N;
    cin >> K;
    cin >> L;

    output = (N*K)/(L);

    if ((N*K)%L == 0){
        cout << output << endl;
    } else {
        cout << output + 1 << endl;
    }

    return 0;
}
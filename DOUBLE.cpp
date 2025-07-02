#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
    int upper = 0;
    int n = 0;
    int lower = 0;

    // Mostrar valores iniciales
    cout << "The initial values are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n     = " << n << endl;
    cout << "lower = " << lower << endl;

    // Ahora almacenar un double en la dirección de un int
    cout << "\nStoring 13.0 into the location &n" << endl;

    double* pD = (double*)&n;
    *pD = 13.0;

    // Mostrar valores finales
    cout << "\nThe final results are:" << endl;
    cout << "upper = " << upper << endl;
    cout << "n     = " << n << endl;
    cout << "lower = " << lower << endl;

    return 0;
}
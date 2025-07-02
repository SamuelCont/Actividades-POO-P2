#include <iostream>
using namespace std;

int main() {

    float num1, num2, num3, num4, mayor;


    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    cout << "Ingrese el tercer número: ";
    cin >> num3;

    cout << "Ingrese el cuarto número: ";
    cin >> num4;

    
    mayor = num1;


    if (num2 > mayor) {
        mayor = num2;
    }

    if (num3 > mayor) {
        mayor = num3;
    }

    if (num4 > mayor) {
        mayor = num4;
    }

   
    cout << "El mayor número es: " << mayor << endl;

    return 0;
}

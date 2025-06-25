#include <iostream>
#include <cmath>  

int main() {
    double angulo, seno, coseno;

    std::cout << "Ingresa el valor del ángulo en radianes: ";
    std::cin >> angulo;

    seno = sin(angulo);
    coseno = cos(angulo);

    std::cout << "El seno del ángulo es: " << seno << std::endl;
    std::cout << "El coseno del ángulo es: " << coseno << std::endl;

    return 0;
}

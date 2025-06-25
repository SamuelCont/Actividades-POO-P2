#include <iostream>
#include <cmath> 

using namespace std;


class Angulo5 {
private:
    double tamAngulo;
    double senAng;
    double cosAng;

public:

    void establecerTamAngulo(double ang) {
        tamAngulo = ang;
    }

 
    void calcularSenAng() {
        senAng = sin(tamAngulo);
    }


    void calcularCosAng() {
        cosAng = cos(tamAngulo);
    }


    double obtenerSenAng() {
        return senAng;
    }

  
    double obtenerCosAng() {
        return cosAng;
    }
};


class EjecutaAngulo5 {
public:
    void principal() {
        double tamAng;
        
      
        Angulo5 objAngulo;

      
        cout << "Ingrese el tamaño del ángulo en radianes: ";
        cin >> tamAng;

        
        objAngulo.establecerTamAngulo(tamAng);
        objAngulo.calcularSenAng();
        objAngulo.calcularCosAng();

        
        cout << "Seno del ángulo: " << objAngulo.obtenerSenAng() << endl;
        cout << "Coseno del ángulo: " << objAngulo.obtenerCosAng() << endl;
    }
};

int main() {
    EjecutaAngulo5 programa;
    programa.principal();

    return 0;
}


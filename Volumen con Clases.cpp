#include <iostream>
#include <cmath>
using namespace std;

const float PI = 3.1416;


class Figura {
protected:
    string nombre;
public:
    Figura(string n) : nombre(n) {}
    virtual void leerDatos() = 0;
    virtual float calcularVolumen() = 0;
    virtual void mostrarResultado() {
        cout << "El volumen de " << nombre << " es: " << calcularVolumen() << endl;
    }
    virtual ~Figura() {}
};
class Cubo : public Figura {
private:
    float arista;
public:
    Cubo() : Figura("Cubo") {}
    void leerDatos() override {
        cout << "Ingrese la arista del cubo: ";
        cin >> arista;
    }
    float calcularVolumen() override {
        return pow(arista, 3);
    }
};


class Cilindro : public Figura {
private:
    float radio, altura;
public:
    Cilindro() : Figura("Cilindro") {}
    void leerDatos() override {
        cout << "Ingrese el radio del cilindro: ";
        cin >> radio;
        cout << "Ingrese la altura del cilindro: ";
        cin >> altura;
    }
    float calcularVolumen() override {
        return PI * pow(radio, 2) * altura;
    }
};


class Cono : public Figura {
private:
    float radio, altura;
public:
    Cono() : Figura("Cono") {}
    void leerDatos() override {
        cout << "Ingrese el radio del cono: ";
        cin >> radio;
        cout << "Ingrese la altura del cono: ";
        cin >> altura;
    }
    float calcularVolumen() override {
        return (PI * pow(radio, 2) * altura) / 3;
    }
};


class Esfera : public Figura {
private:
    float radio;
public:
    Esfera() : Figura("Esfera") {}
    void leerDatos() override {
        cout << "Ingrese el radio de la esfera: ";
        cin >> radio;
    }
    float calcularVolumen() override {
        return (4.0 / 3.0) * PI * pow(radio, 3);
    }
};


int main() {
    int opcion;
    Figura* figura = nullptr;

    do {
        cout << "\nÁREAS FIGURAS GEOMÉTRICAS\n";
        cout << "1. CUBO\n";
        cout << "2. CILINDRO\n";
        cout << "3. CONO\n";
        cout << "4. ESFERA\n";
        cout << "5. SALIR\n";
        cout << "ESCOGER OPCIÓN";
        cin >> opcion;

        switch (opcion) {
            case 1:
                figura = new Cubo();
                break;
            case 2:
                figura = new Cilindro();
                break;
            case 3:
                figura = new Cono();
                break;
            case 4:
                figura = new Esfera();
                break;
            case 5:
                cout << "Programa finalizado.\n";
                break;
            default:
                cout << "Opción no valida.\n";
                continue;
        }

        if (figura != nullptr && opcion >= 1 && opcion <= 4) {
            figura->leerDatos();
            figura->mostrarResultado();
            delete figura;
            figura = nullptr;
        }

    } while (opcion != 5);

    return 0;
}
#include <iostream>
#include "Vector3D.h"

using namespace std;

int main() {
    cout << "Ejercicio 1: VECTOR 3D" << endl << endl;
    
    Vector3D v1(3.0, 4.0, 0.0);
    Vector3D v2(1.0, 2.0, 2.0);
    
    cout << "vector v1: ";
    v1.imprimir();
    cout << endl;
    
    cout << "vector v2: ";
    v2.imprimir();
    cout << endl << endl;
    
    cout << "magnitud de v1: " << v1.magnitud() << endl;
    cout << "magnitud de v2: " << v2.magnitud() << endl << endl;
    
    Vector3D v1_norm = v1.normalizar();
    cout << "v1 normalizado: ";
    v1_norm.imprimir();
    cout << endl;
    cout << "magnitud de v1 normalizado: " << v1_norm.magnitud() << endl << endl;
    
    Vector3D suma = v1 + v2;
    cout << "v1 + v2 = ";
    suma.imprimir();
    cout << endl;
    
    Vector3D resta = v1 - v2;
    cout << "v1 - v2 = ";
    resta.imprimir();
    cout << endl;
    
    double producto = v1 * v2;
    cout << "v1 * v2 (producto escalar) = " << producto << endl;
    
    return 0;
}
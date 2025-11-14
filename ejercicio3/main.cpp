#include <iostream>
#include "Polinomio.h"

using namespace std;

int main() {
    cout << "Ejercicio 3 POLINOMIO" << endl << endl;
    
    // p(x) = 4x^3 + 3x^2 - 2x + 7
    double coefs1[] = {7, -2, 3, 4};
    Polinomio p1(coefs1, 3);
    
    // q(x) = 5x^2 - 6x + 10
    double coefs2[] = {10, -6, 5};
    Polinomio p2(coefs2, 2);
    
    cout << "p(x) = ";
    p1.imprimir();
    cout << endl;
    
    cout << "q(x) = ";
    p2.imprimir();
    cout << endl << endl;
    
    cout << "evaluacion:" << endl;
    cout << "p(2) = " << p1.evaluar(2) << endl;
    cout << "q(2) = " << p2.evaluar(2) << endl << endl;
    
    Polinomio suma = p1 + p2;
    cout << "p(x) + q(x) = ";
    suma.imprimir();
    cout << endl << endl;
    
    Polinomio producto = p1 * p2;
    cout << "p(x) * q(x) = ";
    producto.imprimir();
    cout << endl << endl;
    
    Polinomio derivada = p1.derivar();
    cout << "p'(x) = ";
    derivada.imprimir();
    cout << endl;
    
    Polinomio derivada2 = derivada.derivar();
    cout << "p''(x) = ";
    derivada2.imprimir();
    cout << endl;
    
    return 0;
}
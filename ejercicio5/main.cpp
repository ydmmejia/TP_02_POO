#include <iostream>
#include "CTermino.h"
#include "CPolinomio.h"

using namespace std;

int main() {
    cout << "EJERCICIO 5: ctermino y cpolinomio ===" << endl << endl;
    
    // p(x) = 4x^3 + 3x^2 - 2x + 7
    CPolinomio p;
    p.asignarTermino(CTermino(7, 0));
    p.asignarTermino(CTermino(-2, 1));
    p.asignarTermino(CTermino(3, 2));
    p.asignarTermino(CTermino(4, 3));
    
    cout << "p(x) = " << p.toString() << endl;
    cout << "numero de terminos: " << p.getNumTerminos() << endl << endl;
    
    // q(x) = 5x^2 - 6x + 10
    CPolinomio q;
    q.asignarTermino(CTermino(10, 0));
    q.asignarTermino(CTermino(-6, 1));
    q.asignarTermino(CTermino(5, 2));
    
    cout << "q(x) = " << q.toString() << endl;
    cout << "numero de terminos: " << q.getNumTerminos() << endl << endl;
    
    // suma
    CPolinomio r = p.sumar(q);
    cout << "r(x) = p(x) + q(x) = " << r.toString() << endl << endl;
    
    // multiplicacion
    CPolinomio m = p.multiplicar(q);
    cout << "m(x) = p(x) * q(x) = " << m.toString() << endl << endl;
    
    // prueba de insercion con suma de coeficientes
    cout << "prueba: agregando termino 2x^2 a p(x)" << endl;
    p.asignarTermino(CTermino(2, 2));
    cout << "p(x) = " << p.toString() << endl;
    cout << "el termino x^2 paso de 3 a 5" << endl << endl;
    
    // prueba de termino nulo
    cout << "prueba: agregando termino -5x^2 a p(x)" << endl;
    p.asignarTermino(CTermino(-5, 2));
    cout << "p(x) = " << p.toString() << endl;
    cout << "el termino x^2 desaparecio (5-5=0)" << endl;
    
    return 0;
}
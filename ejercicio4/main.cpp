#include <iostream>
#include "Complex.h"
#include "Polar.h"

using namespace std;

// funcion acumula para numeros complejos
template<typename T>
T acumula(T primero) {
    return primero;
}

template<typename T, typename... Args>
T acumula(T primero, Args... resto) {
    return primero + acumula(resto...);
}

int main() {
    cout << "EJERCICIO 4 - Numeros Complejos" << endl << endl;
    
    // numeros complejos en forma binomial
    Complex c1(3, 4);
    Complex c2(1, -2);
    Complex c3(2, 1);
    
    cout << "forma binomial:" << endl;
    cout << "c1 = ";
    c1.imprimir();
    cout << endl;
    
    cout << "c2 = ";
    c2.imprimir();
    cout << endl;
    
    cout << "c3 = ";
    c3.imprimir();
    cout << endl << endl;
    
    // operaciones con complejos
    Complex suma = c1 + c2;
    cout << "c1 + c2 = ";
    suma.imprimir();
    cout << endl;
    
    Complex resta = c1 - c2;
    cout << "c1 - c2 = ";
    resta.imprimir();
    cout << endl;
    
    Complex producto = c1 * c2;
    cout << "c1 * c2 = ";
    producto.imprimir();
    cout << endl;
    
    Complex division = c1 / c2;
    cout << "c1 / c2 = ";
    division.imprimir();
    cout << endl;
    
    Complex conjugado = c1.conj();
    cout << "conj(c1) = ";
    conjugado.imprimir();
    cout << endl << endl;
    
    // numeros complejos en forma polar
    cout << "forma polar:" << endl;
    Polar p1(5, 0.927);
    Polar p2(2.236, -1.107);
    
    cout << "p1 = ";
    p1.imprimir();
    cout << endl;
    
    cout << "p2 = ";
    p2.imprimir();
    cout << endl << endl;
    
    // operaciones con polares
    Polar suma_p = p1 + p2;
    cout << "p1 + p2 = ";
    suma_p.imprimir();
    cout << endl;
    
    Polar producto_p = p1 * p2;
    cout << "p1 * p2 = ";
    producto_p.imprimir();
    cout << endl;
    
    Polar division_p = p1 / p2;
    cout << "p1 / p2 = ";
    division_p.imprimir();
    cout << endl << endl;
    
    // conversiones
    cout << "conversiones:" << endl;
    Polar c1_polar(c1);
    cout << "c1 en forma polar: ";
    c1_polar.imprimir();
    cout << endl;
    
    Complex p1_complex(p1);
    cout << "p1 en forma binomial: ";
    p1_complex.imprimir();
    cout << endl << endl;
    
    // funcion acumula
    cout << "funcion acumula:" << endl;
    Complex resultado = acumula(c1, c2, c3);
    cout << "acumula(c1, c2, c3) = ";
    resultado.imprimir();
    cout << endl;
    
    Polar resultado_p = acumula(p1, p2);
    cout << "acumula(p1, p2) = ";
    resultado_p.imprimir();
    cout << endl;
    
    return 0;
}
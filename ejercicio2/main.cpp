#include <iostream>
#include "Matriz.h"

using namespace std;

int main() {
    cout << "Ejercicioo 2 MATRIZ" << endl << endl;
    
    int n = 3;
    Matriz m1(n);
    
    cout << "matriz original:" << endl;
    m1.imprimir();
    cout << endl;
    
    cout << "acceso con operador []: m1[0][0] = " << m1[0][0] << endl << endl;
    
    Matriz m2 = m1.transpuesta();
    cout << "matriz transpuesta:" << endl;
    m2.imprimir();
    cout << endl;
    
    Matriz m3 = m1.multiplicar(m2);
    cout << "multiplicacion m1 * m2:" << endl;
    m3.imprimir();
    
    return 0;
}
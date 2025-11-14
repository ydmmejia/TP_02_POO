#ifndef MATRIZ_H
#define MATRIZ_H

#include <iostream>

class Matriz {
private:
    double** datos;
    int n;

public:
    Matriz(int n);
    ~Matriz();
    
    Matriz transpuesta() const;
    Matriz multiplicar(const Matriz& otra) const;
    void imprimir() const;
    
    double* operator[](int i);
    const double* operator[](int i) const;
    
    int getTamano() const;
};

#endif
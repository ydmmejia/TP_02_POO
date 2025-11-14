#ifndef POLINOMIO_H
#define POLINOMIO_H

#include <iostream>

class Polinomio {
private:
    double* coeficientes;
    int grado;

public:
    Polinomio(int grado);
    Polinomio(double* coefs, int grado);
    Polinomio(const Polinomio& otro);
    ~Polinomio();
    
    double evaluar(double x) const;
    Polinomio derivar() const;
    void imprimir() const;
    
    Polinomio operator+(const Polinomio& otro) const;
    Polinomio operator*(const Polinomio& otro) const;
    Polinomio& operator=(const Polinomio& otro);
    
    int getGrado() const;
    double getCoeficiente(int i) const;
};

#endif
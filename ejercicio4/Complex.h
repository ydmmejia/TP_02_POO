#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>

class Polar;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double real = 0.0, double imag = 0.0);
    Complex(const Polar& p);
    
    double getReal() const;
    double getImag() const;
    
    Complex operator+(const Complex& otro) const;
    Complex operator-(const Complex& otro) const;
    Complex operator*(const Complex& otro) const;
    Complex operator/(const Complex& otro) const;
    Complex conj() const;
    
    void imprimir() const;
};

#endif
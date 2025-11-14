#ifndef POLAR_H
#define POLAR_H

#include <iostream>

class Complex;

class Polar {
private:
    double modulo;
    double angulo;

public:
    Polar(double modulo = 0.0, double angulo = 0.0);
    Polar(const Complex& c);
    
    double getModulo() const;
    double getAngulo() const;
    
    Polar operator+(const Polar& otro) const;
    Polar operator-(const Polar& otro) const;
    Polar operator*(const Polar& otro) const;
    Polar operator/(const Polar& otro) const;
    Polar conj() const;
    
    void imprimir() const;
};

#endif
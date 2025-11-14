#include "Polar.h"
#include "Complex.h"
#include <cmath>

Polar::Polar(double modulo, double angulo) : modulo(modulo), angulo(angulo) {}

Polar::Polar(const Complex& c) {
    modulo = sqrt(c.getReal() * c.getReal() + c.getImag() * c.getImag());
    angulo = atan2(c.getImag(), c.getReal());
}

double Polar::getModulo() const {
    return modulo;
}

double Polar::getAngulo() const {
    return angulo;
}

Polar Polar::operator+(const Polar& otro) const {
    Complex c1(*this);
    Complex c2(otro);
    Complex resultado = c1 + c2;
    return Polar(resultado);
}

Polar Polar::operator-(const Polar& otro) const {
    Complex c1(*this);
    Complex c2(otro);
    Complex resultado = c1 - c2;
    return Polar(resultado);
}

Polar Polar::operator*(const Polar& otro) const {
    return Polar(modulo * otro.modulo, angulo + otro.angulo);
}

Polar Polar::operator/(const Polar& otro) const {
    return Polar(modulo / otro.modulo, angulo - otro.angulo);
}

Polar Polar::conj() const {
    return Polar(modulo, -angulo);
}

void Polar::imprimir() const {
    std::cout << modulo << " * e^(" << angulo << "i)";
}
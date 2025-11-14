#include "Complex.h"
#include "Polar.h"
#include <cmath>

Complex::Complex(double real, double imag) : real(real), imag(imag) {}

Complex::Complex(const Polar& p) {
    real = p.getModulo() * cos(p.getAngulo());
    imag = p.getModulo() * sin(p.getAngulo());
}

double Complex::getReal() const {
    return real;
}

double Complex::getImag() const {
    return imag;
}

Complex Complex::operator+(const Complex& otro) const {
    return Complex(real + otro.real, imag + otro.imag);
}

Complex Complex::operator-(const Complex& otro) const {
    return Complex(real - otro.real, imag - otro.imag);
}

Complex Complex::operator*(const Complex& otro) const {
    return Complex(
        real * otro.real - imag * otro.imag,
        real * otro.imag + imag * otro.real
    );
}

Complex Complex::operator/(const Complex& otro) const {
    double denominador = otro.real * otro.real + otro.imag * otro.imag;
    return Complex(
        (real * otro.real + imag * otro.imag) / denominador,
        (imag * otro.real - real * otro.imag) / denominador
    );
}

Complex Complex::conj() const {
    return Complex(real, -imag);
}

void Complex::imprimir() const {
    if (imag >= 0) {
        std::cout << real << " + " << imag << "i";
    } else {
        std::cout << real << " - " << -imag << "i";
    }
}
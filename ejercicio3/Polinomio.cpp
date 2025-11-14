#include "Polinomio.h"
#include <cmath>

Polinomio::Polinomio(int grado) : grado(grado) {
    coeficientes = new double[grado + 1];
    for (int i = 0; i <= grado; i++) {
        coeficientes[i] = 0;
    }
}

Polinomio::Polinomio(double* coefs, int grado) : grado(grado) {
    coeficientes = new double[grado + 1];
    for (int i = 0; i <= grado; i++) {
        coeficientes[i] = coefs[i];
    }
}

Polinomio::Polinomio(const Polinomio& otro) : grado(otro.grado) {
    coeficientes = new double[grado + 1];
    for (int i = 0; i <= grado; i++) {
        coeficientes[i] = otro.coeficientes[i];
    }
}

Polinomio::~Polinomio() {
    delete[] coeficientes;
}

double Polinomio::evaluar(double x) const {
    double resultado = 0;
    for (int i = grado; i >= 0; i--) {
        resultado = resultado * x + coeficientes[i];
    }
    return resultado;
}

Polinomio Polinomio::derivar() const {
    if (grado == 0) return Polinomio(0);
    
    Polinomio derivada(grado - 1);
    for (int i = 1; i <= grado; i++) {
        derivada.coeficientes[i-1] = coeficientes[i] * i;
    }
    return derivada;
}

void Polinomio::imprimir() const {
    bool primero = true;
    for (int i = grado; i >= 0; i--) {
        if (coeficientes[i] == 0) continue;
        
        if (!primero && coeficientes[i] > 0) {
            std::cout << " + ";
        } else if (coeficientes[i] < 0) {
            std::cout << (primero ? "-" : " - ");
        }
        
        double coef = fabs(coeficientes[i]);
        
        if (i == 0) {
            std::cout << coef;
        } else if (i == 1) {
            if (coef != 1) std::cout << coef;
            std::cout << "x";
        } else {
            if (coef != 1) std::cout << coef;
            std::cout << "x^" << i;
        }
        
        primero = false;
    }
    if (primero) std::cout << "0";
}

Polinomio Polinomio::operator+(const Polinomio& otro) const {
    int maxGrado = (grado > otro.grado) ? grado : otro.grado;
    Polinomio resultado(maxGrado);
    
    for (int i = 0; i <= grado; i++) {
        resultado.coeficientes[i] += coeficientes[i];
    }
    for (int i = 0; i <= otro.grado; i++) {
        resultado.coeficientes[i] += otro.coeficientes[i];
    }
    
    return resultado;
}

Polinomio Polinomio::operator*(const Polinomio& otro) const {
    Polinomio resultado(grado + otro.grado);
    
    for (int i = 0; i <= grado; i++) {
        for (int j = 0; j <= otro.grado; j++) {
            resultado.coeficientes[i+j] += coeficientes[i] * otro.coeficientes[j];
        }
    }
    
    return resultado;
}

Polinomio& Polinomio::operator=(const Polinomio& otro) {
    if (this != &otro) {
        delete[] coeficientes;
        grado = otro.grado;
        coeficientes = new double[grado + 1];
        for (int i = 0; i <= grado; i++) {
            coeficientes[i] = otro.coeficientes[i];
        }
    }
    return *this;
}

int Polinomio::getGrado() const {
    return grado;
}

double Polinomio::getCoeficiente(int i) const {
    return coeficientes[i];
}
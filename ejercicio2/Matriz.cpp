#include "Matriz.h"
#include <cstdlib>
#include <ctime>
#include <iomanip>

Matriz::Matriz(int n) : n(n) {
    datos = new double*[n];
    for (int i = 0; i < n; i++) {
        datos[i] = new double[n];
    }
    
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            datos[i][j] = (rand() % 10);
        }
    }
}

Matriz::~Matriz() {
    for (int i = 0; i < n; i++) {
        delete[] datos[i];
    }
    delete[] datos;
}

Matriz Matriz::transpuesta() const {
    Matriz resultado(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = datos[j][i];
        }
    }
    return resultado;
}

Matriz Matriz::multiplicar(const Matriz& otra) const {
    Matriz resultado(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; k++) {
                resultado[i][j] += datos[i][k] * otra.datos[k][j];
            }
        }
    }
    return resultado;
}

void Matriz::imprimir() const {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(6) << datos[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

double* Matriz::operator[](int i) {
    return datos[i];
}

const double* Matriz::operator[](int i) const {
    return datos[i];
}

int Matriz::getTamano() const {
    return n;
}
#ifndef CPOLINOMIO_H
#define CPOLINOMIO_H

#include "CTermino.h"
#include <string>

class CPolinomio {
private:
    CTermino* polinomio;
    int numTerminos;
    int capacidad;
    
    void redimensionar();
    int buscarExponente(int exp) const;

public:
    CPolinomio();
    CPolinomio(const CPolinomio& otro);
    ~CPolinomio();
    
    int getNumTerminos() const;
    void asignarTermino(const CTermino& termino);
    
    CPolinomio sumar(const CPolinomio& otro) const;
    CPolinomio multiplicar(const CPolinomio& otro) const;
    
    std::string toString() const;
    
    CPolinomio& operator=(const CPolinomio& otro);
};

#endif
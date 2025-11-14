#include "CPolinomio.h"
#include <sstream>

CPolinomio::CPolinomio() : numTerminos(0), capacidad(10) {
    polinomio = new CTermino[capacidad];
}

CPolinomio::CPolinomio(const CPolinomio& otro) : numTerminos(otro.numTerminos), capacidad(otro.capacidad) {
    polinomio = new CTermino[capacidad];
    for (int i = 0; i < numTerminos; i++) {
        polinomio[i] = otro.polinomio[i];
    }
}

CPolinomio::~CPolinomio() {
    delete[] polinomio;
}

int CPolinomio::getNumTerminos() const {
    return numTerminos;
}

void CPolinomio::redimensionar() {
    capacidad *= 2;
    CTermino* nuevo = new CTermino[capacidad];
    for (int i = 0; i < numTerminos; i++) {
        nuevo[i] = polinomio[i];
    }
    delete[] polinomio;
    polinomio = nuevo;
}

int CPolinomio::buscarExponente(int exp) const {
    for (int i = 0; i < numTerminos; i++) {
        if (polinomio[i].getExponente() == exp) {
            return i;
        }
    }
    return -1;
}

void CPolinomio::asignarTermino(const CTermino& termino) {
    if (termino.getCoeficiente() == 0) {
        return;
    }
    
    int indice = buscarExponente(termino.getExponente());
    
    if (indice != -1) {
        double nuevoCoef = polinomio[indice].getCoeficiente() + termino.getCoeficiente();
        if (nuevoCoef == 0) {
            for (int i = indice; i < numTerminos - 1; i++) {
                polinomio[i] = polinomio[i + 1];
            }
            numTerminos--;
        } else {
            polinomio[indice].setCoeficiente(nuevoCoef);
        }
    } else {
        if (numTerminos == capacidad) {
            redimensionar();
        }
        
        int pos = 0;
        while (pos < numTerminos && polinomio[pos].getExponente() < termino.getExponente()) {
            pos++;
        }
        
        for (int i = numTerminos; i > pos; i--) {
            polinomio[i] = polinomio[i - 1];
        }
        
        polinomio[pos] = termino;
        numTerminos++;
    }
}

CPolinomio CPolinomio::sumar(const CPolinomio& otro) const {
    CPolinomio resultado;
    
    for (int i = 0; i < numTerminos; i++) {
        resultado.asignarTermino(polinomio[i]);
    }
    
    for (int i = 0; i < otro.numTerminos; i++) {
        resultado.asignarTermino(otro.polinomio[i]);
    }
    
    return resultado;
}

CPolinomio CPolinomio::multiplicar(const CPolinomio& otro) const {
    CPolinomio resultado;
    
    for (int i = 0; i < numTerminos; i++) {
        for (int j = 0; j < otro.numTerminos; j++) {
            double coef = polinomio[i].getCoeficiente() * otro.polinomio[j].getCoeficiente();
            int exp = polinomio[i].getExponente() + otro.polinomio[j].getExponente();
            resultado.asignarTermino(CTermino(coef, exp));
        }
    }
    
    return resultado;
}

std::string CPolinomio::toString() const {
    if (numTerminos == 0) {
        return "0";
    }
    
    std::stringstream ss;
    
    for (int i = numTerminos - 1; i >= 0; i--) {
        if (i < numTerminos - 1) {
            if (polinomio[i].getCoeficiente() > 0) {
                ss << " + ";
            } else {
                ss << " - ";
            }
            CTermino temp(std::abs(polinomio[i].getCoeficiente()), polinomio[i].getExponente());
            ss << temp.toString();
        } else {
            if (polinomio[i].getCoeficiente() < 0) {
                ss << "-";
                CTermino temp(std::abs(polinomio[i].getCoeficiente()), polinomio[i].getExponente());
                ss << temp.toString();
            } else {
                ss << polinomio[i].toString();
            }
        }
    }
    
    return ss.str();
}

CPolinomio& CPolinomio::operator=(const CPolinomio& otro) {
    if (this != &otro) {
        delete[] polinomio;
        numTerminos = otro.numTerminos;
        capacidad = otro.capacidad;
        polinomio = new CTermino[capacidad];
        for (int i = 0; i < numTerminos; i++) {
            polinomio[i] = otro.polinomio[i];
        }
    }
    return *this;
}
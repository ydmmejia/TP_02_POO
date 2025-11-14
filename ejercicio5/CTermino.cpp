#include "CTermino.h"
#include <sstream>
#include <cmath>

CTermino::CTermino(double coef, int exp) : coeficiente(coef), exponente(exp) {}

double CTermino::getCoeficiente() const {
    return coeficiente;
}

int CTermino::getExponente() const {
    return exponente;
}

void CTermino::setCoeficiente(double coef) {
    coeficiente = coef;
}

void CTermino::setExponente(int exp) {
    exponente = exp;
}

std::string CTermino::toString() const {
    std::stringstream ss;
    
    if (coeficiente == 0) {
        return "";
    }
    
    double coef = fabs(coeficiente);
    
    if (exponente == 0) {
        ss << coef;
    } else if (exponente == 1) {
        if (coef == 1) {
            ss << "x";
        } else {
            ss << coef << "x";
        }
    } else {
        if (coef == 1) {
            ss << "x^" << exponente;
        } else {
            ss << coef << "x^" << exponente;
        }
    }
    
    return ss.str();
}
#ifndef CTERMINO_H
#define CTERMINO_H

#include <string>

class CTermino {
private:
    double coeficiente;
    int exponente;

public:
    CTermino(double coef = 0.0, int exp = 0);
    
    double getCoeficiente() const;
    int getExponente() const;
    
    void setCoeficiente(double coef);
    void setExponente(int exp);
    
    std::string toString() const;
};

#endif
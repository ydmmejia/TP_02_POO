#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double x = 0.0, double y = 0.0, double z = 0.0);
    
    double getX() const;
    double getY() const;
    double getZ() const;
    
    double magnitud() const;
    Vector3D normalizar() const;
    
    Vector3D operator+(const Vector3D& otro) const;
    Vector3D operator-(const Vector3D& otro) const;
    double operator*(const Vector3D& otro) const;
    
    void imprimir() const;
};

#endif
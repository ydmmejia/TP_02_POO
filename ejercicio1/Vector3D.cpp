#include "Vector3D.h"
#include <cmath>

Vector3D::Vector3D(double x, double y, double z) : x(x), y(y), z(z) {}

double Vector3D::getX() const { return x; }
double Vector3D::getY() const { return y; }
double Vector3D::getZ() const { return z; }

double Vector3D::magnitud() const {
    return sqrt(x*x + y*y + z*z);
}

Vector3D Vector3D::normalizar() const {
    double mag = magnitud();
    if (mag == 0) return Vector3D(0, 0, 0);
    return Vector3D(x/mag, y/mag, z/mag);
}

Vector3D Vector3D::operator+(const Vector3D& otro) const {
    return Vector3D(x + otro.x, y + otro.y, z + otro.z);
}

Vector3D Vector3D::operator-(const Vector3D& otro) const {
    return Vector3D(x - otro.x, y - otro.y, z - otro.z);
}

double Vector3D::operator*(const Vector3D& otro) const {
    return x*otro.x + y*otro.y + z*otro.z;
}

void Vector3D::imprimir() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}
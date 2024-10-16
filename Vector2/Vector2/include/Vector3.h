#pragma once
#include "Prerequisites.h"

class Vector3 {
public:

  Vector3(float x1 = 0, float y1 = 0, float z1 = 0) : x(x1), y(y1), z(z1) {}

  ~Vector3() = default;

  //Suma
  Vector3
    operator+(const Vector3& other) {
    return Vector3(x + other.x, y + other.y, z + other.z);
  }

  //Resta
  Vector3
    operator-(const Vector3& other) {
    return Vector3(x - other.x, y - other.y, z + other.z);
  }

  //Muliplicacion
  Vector3
    operator*(float escalar) {
    return Vector3(x * escalar, y * escalar, z * escalar);
  }

  //Magnitud
  float
    magnitud() const {
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
  }

  //Normalizar
  Vector3
    normalize() {
    float mag = magnitud();
    if (mag == 0) {
      return Vector3(0, 0);
    }
    else {

      return Vector3(x / mag, y / mag, z / mag);
    }
  }

  float*
    data() {
    return &x, & y, & z;
  }

  const float*
    data() const {
    return &x, & y, & z;
  }


  //Imprimir el vector
  void
    print() {
    std::cout << " Vector: " << x << ", " << y << ", " << z << std::endl;
  }

  float x;
  float y;
  float z;
};
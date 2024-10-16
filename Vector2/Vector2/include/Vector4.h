#pragma once
#include "Prerequisites.h"

class Vector4 {
public:

  Vector4(float x1 = 0, float y1 = 0, float z1 = 0, float w1 = 0)
    : x(x1), y(y1), z(z1), w(w1) {}

  ~Vector4() = default;

  //Suma
  Vector4
    operator+(const Vector4& other) const {
    return Vector4(x + other.x, y + other.y, z + other.z, w + other.w);
  }

  //Resta
  Vector4
    operator-(const Vector4& other) const {
    return Vector4(x - other.x, y - other.y, z + other.z, w + other.w);
  }

  //Muliplicacion
  Vector4
    operator*(float escalar) const {
    return Vector4(x * escalar, y * escalar, z * escalar, w * escalar);
  }

  //Magnitud
  float
    magnitud() const {
    return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(w, 2));
  }

  //Normalizar 
  Vector4
    normalize() const {
    float mag = magnitud();
    if (mag == 0) {
      return Vector4(0, 0);
    }
    else {

      return Vector4(x / mag, y / mag, z / mag, w / mag);
    }
  }

  float*
    data() {
    return &x, & y, & z, & w;
  }

  const float*
    data() const {
    return &x, & y, & z, & w;
  }


  //Imprimir el vector
  void
    print() {
    std::cout << " Vector: " << x << ", " << y << ", " << z << ", " << w << std::endl;
  }

  float x;
  float y;
  float z;
  float w;
};
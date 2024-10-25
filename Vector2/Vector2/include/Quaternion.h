#pragma once
#include "Prerequisites.h"
#include "Vector3.h"

class Quaternion {
public:
  //Variables publicas
  float x, y, z, w;

  //Constructor por defecto que inicialice los valores de x, y, z, w a 0.
  Quaternion(float x1 = 0, float y1 = 0, float z1 = 0, float w1 = 0)
    : x(x1), y(y1), z(z1), w(w1) {}

  //Destructor por defecto
  ~Quaternion() = default;

  //Constructor que inicialice un cuaternión a partir de un ángulo y un eje derotación
  Quaternion static fromAxisAngle(Vector3& _axis, float _angle) {
    float medioAngulo = _angle * .5f;
    float senoMedioAngulo = sin(medioAngulo);

    return Quaternion(_axis.x * senoMedioAngulo, _axis.y * senoMedioAngulo, _axis.z * senoMedioAngulo, cos(medioAngulo));
  }

  //Suma, sobrecarga el operador de operador uniario
  Quaternion
    operator+(const Quaternion& other) const {
    return Quaternion(x + other.x, y + other.y, z + other.z, w + other.w);
  }

  //Resta, sobrecarga el operador de operador uniario
  Quaternion
    operator-(const Quaternion& other) const {
    return Quaternion(x - other.x, y - other.y, z - other.z, w - other.w);
  }

  //Muliplicacion, sobrecarga el operador de operador uniario
  Quaternion
    operator*(const Quaternion& other) const {
    return Quaternion(w * other.w - x * other.x - y * other.y - z * other.z,
      w * other.x + x * other.w + y * other.z - z * other.y,
      w * other.y - x * other.z + y * other.w + z * other.x,
      w * other.z + x * other.y - y * other.x + z * other.w);
  }

  //Y multiplicacion por escalar
  Quaternion
    operator*(float escalar) const {
    return Quaternion(x * escalar, y * escalar, z * escalar, w * escalar);
  }

  //método que devuelva la magnitud del cuaternión, calculada como la raíz cuadrada de w* w + x * x + y * y + z * z.
  float
    magnitud() const {
    return (w * w + x * x + y * y + z * z);
  }

  //Metodo que devuelve el cuaternión normalizado(de magnitud 1).
  Quaternion
    normalize() const {
    float mag = magnitud();
    if (mag == 0) {
      return Quaternion(0, 0, 0, 0);
    }
    else {

      return Quaternion(x / mag, y / mag, z / mag, w / mag);
    }
  }

  //Metodo que devuelve el conjugado del cuaternión.
  Quaternion
    conjugate() {
    return Quaternion(-x, -y, -z, -w);
  }

  //Metodo que devuelve el cuaternión inverso.
  Quaternion
    inverse() {
    Quaternion conj = conjugate();
    float mag = pow(magnitud(), 2);
    if (mag == 0) {
      return Quaternion(1, 0, 0, 0);
    }
    else {
      return Quaternion(conj.x / mag, conj.y / mag, conj.z / mag, conj.w / mag);
    }

  }

  //Metood que que utiliza el cuaternión para rotar un vector v.
  Vector3 rotate(const Vector3& v) {
    Quaternion vq(v.x, v.y, v.z, 0);
    Quaternion q = normalize();
    Quaternion rotated = q * vq * q.inverse();

    return Vector3(rotated.x, rotated.y, rotated.z);
  }

  //Metodo que devuelve un puntero a los componentes del cuaternión(x, y, z, w).
  float*
    data() {
    return &x, & y, & z, & w;
  }

  //Metodo que devuelve una versión constante del método float* data()
  const float*
    data() const {
    return &x, & y, & z, & w;
  }

  void
    print() {
    std::cout << " Vector: " << x << ", " << y << ", " << z << ", " << w << std::endl;
  }
};
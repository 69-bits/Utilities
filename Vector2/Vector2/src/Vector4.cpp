#include "Vector4.h"

int main() {
  Vector4 v1(4.0f, 8.0f, 1.0f, 3.0f);
  Vector4 v2 = v1 + Vector4(3.0f, 4.0f, 3.0f, 9.0f);

  v2.print();

  v1.print();

  Vector4 v4 = v1 - Vector4(5.0f, 5.0f, 9.0f, 3.0f);

  v4.print();

  Vector4 v5 = v1 * 5.0f;

  v5.print();

  float mag = v1.magnitud();

  v1.print();

  Vector4 v6 = v1.normalize();

  v6.print();

  return 0;
}
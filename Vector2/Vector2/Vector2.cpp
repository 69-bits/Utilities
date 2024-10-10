#include "Vector2.h"

int main() {
  Vector2 v1(4.0f, 8.0f);
  Vector2 v2 = v1 + Vector2(3.0f, 4.0f);

  v2.print();

  v1.print();

  Vector2 v4 = v1 - Vector2(5.0f, 5.0f);

  v4.print();

  Vector2 v5 = v1 * 5.0f;

  v5.print();

  float mag = v1.magnitud();

  v1.print();

  Vector2 v6 = v1.normalize(mag);

  v6.print();

  return 0;
}
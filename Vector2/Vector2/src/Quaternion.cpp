#include "Quaternion.h"

int main() {
  Quaternion q1(4.0f, 8.0f, 1.0f, 3.0f);

  Vector3 axis(3.0f, 4.0f, 3.0f);

  float angle = 90.0f;

  Quaternion q2 = Quaternion::fromAxisAngle(axis, angle);

  Quaternion q3 = q1 + q2;

  q3.print();

  Quaternion q4 = q1 * q1;

  q4.print();

  Quaternion q5 = q2 * 0.5f;

  q5.print();

  float mag = q2.magnitud();

  q2.print();

  Quaternion q6 = q2.normalize();

  q6.print();

  Quaternion qConjugate = q2.conjugate();

  qConjugate.print();

  Quaternion qInverse = q2.inverse();

  Quaternion qinversee = q1.inverse();

  qinversee.print();

  Vector3 v(1.0f, 3.0f, 43.0f);

  Vector3 vRotated = q1.rotate(v);

  vRotated.print();


  return 0;
}
#include "Vector.hpp"

Vector3D append(const Vector3D &a, const Vector3D &b) {
  Vector3D c(a.rows(), a.cols() + b.cols());
  c.leftCols(a.cols()) = a;
  c.rightCols(b.cols()) = b;
  return c;
}

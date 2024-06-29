#ifndef __AA_VECTOR_HPP__
#define __AA_VECTOR_HPP__

#include <iostream>
#include <Eigen/Dense>

using Size = Eigen::Matrix<int, 2, 1>;
using Vector3D = Eigen::Matrix<double, 3, Eigen::Dynamic>;

inline Vector3D vector3D() { return Vector3D::Zero(3, 1); }
inline Vector3D vector3D(double x, double y, double z = 0) { return Eigen::Vector3d(x,y,z); }
inline Vector3D vector3D(int n) { return Vector3D::Zero(3, n); }

inline int size(const Vector3D &v, int i) { return i == 0 ? v.rows() : v.cols(); }
inline Size size(const Vector3D &v) { return Size(v.rows(), v.cols()); }

Vector3D append(const Vector3D &a, const Vector3D &b);

// For loop
inline auto foreach(const Vector3D &v) { return v.colwise(); }

#endif

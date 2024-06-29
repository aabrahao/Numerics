// sudo apt install libeigen3-dev

#include <iostream>
#include <Eigen/Dense>

#include "Vector.hpp"

int main(int argc, char **argv) {

  auto v = vector3D(4);
  std::cout << v << std::endl << std::endl;

  v << 1, 10, 100, 1000,
       2, 20, 200, 2000,
       3, 30, 300, 3000; 
  std::cout << v << std::endl << std::endl;

  auto n = size(v);
  for (int i = n(1); i < n(1) + 4; ++i)
    v = append(v, std::pow(10,i)*vector3D(1,2,3));
  std::cout << v << std::endl << std::endl;

  for ( auto &u : foreach(v) )
    std::cout << u << std::endl;

  std::cout << v << std::endl << std::endl;


  for (int i = 0; i < size(v, 1) ; ++i )
    v.col(i) = vector3D(-1, -1, -1);

  std::cout << v << std::endl << std::endl;
}
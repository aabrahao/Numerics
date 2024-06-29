cmake_minimum_required (VERSION 3.5)

project (numerics)

set (CMAKE_CXX_STANDARD 20)

find_package (Eigen3 3.4 REQUIRED NO_MODULE)
 
add_executable (${PROJECT_NAME} 
    main.cpp 
    Vector.hpp 
    Vector.cpp
)

target_link_libraries (${PROJECT_NAME}
    Eigen3::Eigen
)
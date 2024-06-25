cmake_minimum_required(VERSION 3.10)
project(KokkosProject)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")

list(APPEND CMAKE_PREFIX_PATH "/home/ningzhangcaltech/spack/opt/spack/linux-ubuntu22.04-x86_64_v4/gcc-13.1.0/kokkos-4.1.00-ikfzwmsxyamzqgu5vebkj53itrawv66y/lib/cmake/Kokkos")

include_directories(/home/ningzhangcaltech/spack/opt/spack/linux-ubuntu22.04-x86_64_v4/gcc-13.1.0/kokkos-4.1.00-ikfzwmsxyamzqgu5vebkj53itrawv66y/include)

find_package(Kokkos REQUIRED)
set(Kokkos_ENABLE_OPENMP ON)

add_subdirectory(Kokkos)
add_subdirectory(libsimdpp)
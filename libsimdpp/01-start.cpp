#include <iostream>
#include <simdpp/simd.h>

using namespace simdpp;

int main() {
    // Input arrays
    float a[] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float b[] = {8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f};
    
    // Output array
    float c[8];
    
    // Load the input arrays into SIMD vectors
    float32<8> vec_a = load_u(a);
    float32<8> vec_b = load_u(b);
    
    // Perform vectorized addition
    float32<8> vec_c = vec_a + vec_b;
    
    // Store the result back into the output array
    store_u(c, vec_c);
    
    // Print the result
    std::cout << "Result: ";
    for (int i = 0; i < 8; i++) {
        std::cout << c[i] << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
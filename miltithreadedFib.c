// writtern by Rastislav Brna
// Source: https://github.com/magicsk/SEMAP_DynamicPrograming
// IDE: Visual Studio Code
// Compiler: gcc  args: -lm -std=c99 -fopenmp 

#include <stdio.h>
#include <omp.h>

long fib(long n) {
     if (n < 2) return n;
     long x, y;
     #pragma omp task shared(x)
     x = fib(n - 1);
     #pragma omp task shared(y)
     y = fib(n - 2);
     #pragma omp taskwait
     return x + y; 
}

int main() {
    omp_set_num_threads(10);

    printf("%ld\n", fib(6)); // 8
    printf("%ld\n", fib(7)); // 13
    printf("%ld\n", fib(8)); // 21
    printf("%ld\n", fib(10)); // 55
    printf("%ld\n", fib(50)); // 12586269025

    return 0;
}
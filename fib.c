// writtern by Rastislav Brna
// Source: https://github.com/magicsk/SEMAP_DynamicPrograming
// IDE: Visual Studio Code
// Compiler: gcc  args: -lm -std=c99

#include <stdio.h>

long fib(long n) {
    if (n <= 2) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("%ld\n", fib(6)); // 8
    printf("%ld\n", fib(7)); // 13
    printf("%ld\n", fib(8)); // 21
    printf("%ld\n", fib(10)); // 55
    printf("%ld\n", fib(50)); // 12586269025

    return 0;
}
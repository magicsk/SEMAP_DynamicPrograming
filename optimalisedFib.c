// writtern by Rastislav Brna
// Source: https://github.com/magicsk/SEMAP_DynamicPrograming
// IDE: Visual Studio Code
// Compiler: gcc  args: -lm -std=c99

#include <stdio.h>

long fib(long n, long mem[]){
    if (mem[n] != 0) return mem[n]; // overujeme či už sme daný výpočet robili
    if (n <= 2) return 1;
    mem[n] = fib(n - 1, mem) + fib(n - 2, mem); // nový výpočet zapisujeme do pamäte
    return mem[n];
}


int main(){
    long mem[256] = {0}; // vytvoríme pole
    
    printf("%ld\n", fib(6, mem)); // 8
    printf("%ld\n", fib(7, mem)); // 13
    printf("%ld\n", fib(8, mem)); // 21
    printf("%ld\n", fib(10, mem)); // 55
    printf("%ld\n", fib(50, mem)); // 12586269025
    printf("%ld\n", fib(500, mem)); // 4424906730676370225

    return 0;
}
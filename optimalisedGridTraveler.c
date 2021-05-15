// writtern by Rastislav Brna
// Source: https://github.com/magicsk/SEMAP_DynamicPrograming
// IDE: Visual Studio Code
// Compiler: gcc  args: -lm -std=c99

#include <stdio.h>

long gridTraveler(int x, int y, long mem[256][256]) {
    if (mem[x][y] != 0) return mem[x][y]; // overujeme či už sme daný výpočet robili
    if (x == 1 && y == 1) return 1;
    if (x == 0 || y == 0) return 0;
    // nový výpočet zapisujeme do pamäte
    mem[x][y] = gridTraveler(x - 1, y, mem) + gridTraveler(x, y - 1, mem);
    return mem[x][y];
}

int main(){
    long mem[256][256] = {0}; // vytvoríme pole

    printf("%ld\n", gridTraveler(1, 1, mem)); // 1
    printf("%ld\n", gridTraveler(2, 3, mem)); // 3
    printf("%ld\n", gridTraveler(3, 2, mem)); // 3
    printf("%ld\n", gridTraveler(3, 3, mem)); // 6
    printf("%ld\n", gridTraveler(18, 18, mem)); // 2333606220

    return 0;
}
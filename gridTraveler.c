// writtern by Rastislav Brna
// Source: https://github.com/magicsk/SEMAP_DynamicPrograming
// IDE: Visual Studio Code
// Compiler: gcc  args: -lm -std=c99

#include <stdio.h>

long gridTraveler(int x, int y) {
    if (x == 1 && y == 1) return 1;
    if (x == 0 || y == 0) return 0;
    return gridTraveler(x - 1, y) + gridTraveler(x, y - 1);
}

int main(){
    printf("%ld\n", gridTraveler(1, 1)); // 1
    printf("%ld\n", gridTraveler(2, 3)); // 3
    printf("%ld\n", gridTraveler(3, 2)); // 3
    printf("%ld\n", gridTraveler(3, 3)); // 6
    printf("%ld\n", gridTraveler(18, 18)); // ?

    return 0;
}
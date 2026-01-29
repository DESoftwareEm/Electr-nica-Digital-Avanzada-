#include <stdio.h>
#include <stdlib.h>

/*
2^0 = 1 = 0001
2^1 = 2 = 0010
2^2 = 4 = 0100
2^3 = 8 = 1000
2^4 = 16 = 0001 0000
2^5 = 32 = 0010 0000
2^6 = 64 = 0100 0000
*/

int Dos(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    printf("Potencias de 2 entre 0 y 100:\n");
    for (int i = 0; i <= 100; i++) {
        if (Dos(i)) {
            printf("%d\n", i);
        }
    }
    return 0;
}
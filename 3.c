#include <stdio.h>

int main() {
    printf("Números pares de 100 a 1 são:\n");

    for (int i = 100; i >= 2; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

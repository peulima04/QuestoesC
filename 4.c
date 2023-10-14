#include <stdio.h>

void imprimirTabuada(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int numero;

    printf("Digite um número inteiro para saber sua tabuada: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    imprimirTabuada(numero);

    return 0;
}

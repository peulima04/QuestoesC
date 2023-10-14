#include <stdio.h>

void SequenciaAteX(int X) {
    for (int i = 1; i <= X; i++) {
        printf("%d ", i);
    }
}

int main() {
    int X;

    printf("Digite um número inteiro com valor 'X': ");
    scanf("%d", &X);

    if (X > 0) {
        SequenciaAteX(X);
        printf("\n");
    } else {
        printf("O valor de 'X' deve ser positivo.\n");
    }

    return 0;
}

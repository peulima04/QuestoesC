#include <stdio.h>

int main() {
    int valor, maior, menor;

    printf("Digite 5 números: ");
    scanf("%d", &valor);

    maior = menor = valor;

    for (int i = 2; i <= 5; i++) {
        printf("Digite o %dº número: ", i);
        scanf("%d", &valor);

        if (valor > maior) maior = valor;
        if (valor < menor) menor = valor;
    }

    printf("O maior valor é: %d\n", maior);
    printf("O menor valor é: %d\n", menor);

    return 0;
}

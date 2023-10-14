#include <stdio.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 0 && nota <= 100) {
        if (nota >= 60) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }
    } else {
        printf("Nota fora do intervalo válido (0 a 100).\n");
    }

    return 0;
}

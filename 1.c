#include <stdio.h>

int main() {
    float nota;

    // Solicita a nota ao usuário
    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    // Verifica se a nota está dentro do intervalo válido
    if (nota >= 0 && nota <= 100) {
        // Verifica se a nota é maior ou igual a 60
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

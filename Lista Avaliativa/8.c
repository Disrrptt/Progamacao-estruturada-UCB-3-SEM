#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    maior = numero;
    menor = numero;

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }

        if (numero < menor) {
            menor = numero;
        }

        printf("Digite outro numero inteiro (ou um negativo para sair): ");
        scanf("%d", &numero);
    }

    printf("O maior numero lido foi: %d\n", maior);
    printf("O menor numero lido foi: %d\n", menor);

    return 0;
}

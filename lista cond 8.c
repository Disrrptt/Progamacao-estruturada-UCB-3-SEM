#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    float valor, preco_final;
    char estado[3];

            printf("Digite o valor do produto: ");
            scanf("%f", &valor);

            printf("Digite o estado de destino (sigla): ");
            scanf("%s", estado);

            if (strcmp(estado, "SP") == 0) {
            preco_final = valor * 1.12;
            } else if (strcmp(estado, "RJ") == 0) {
            preco_final = valor * 1.15;
            } else if (strcmp(estado, "MG") == 0) {
            preco_final = valor * 1.07;
            } else if (strcmp(estado, "MS") == 0) {
            preco_final = valor * 1.08;
            } else {
            printf("Estado digitado invalido\n");
            return 1;
            }

            printf("Preco final do produto: R$%.2f\n", preco_final);

    return 0;
}

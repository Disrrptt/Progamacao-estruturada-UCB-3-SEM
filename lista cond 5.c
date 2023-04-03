#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float numero;

        printf("Digite um número: ");
        scanf("%f", &numero);

    if (numero > 0) {
        float quadrado = numero * numero;
        float raiz = sqrt(numero);

        printf("O número ao quadrado é: %.2f\n", quadrado);
        printf("A raiz quadrada do número é: %.2f\n", raiz);
    } else {
        printf("O número deve ser positivo.\n");
    }

    return 0;
}

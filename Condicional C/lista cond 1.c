#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float numero1, numero2;

        printf("Digite o primeiro número: ");
        scanf("%f", &numero1);

        printf("Digite o segundo número: ");
        scanf("%f", &numero2);

    if (numero1 > numero2) {
            printf("%.2f é maior que %.2f", numero1, numero2);
    } else if (numero2 > numero1) {
            printf("%.2f é maior que %.2f", numero2, numero1);
    } else {
            printf("Os números são iguais");
    }

    return 0;
}

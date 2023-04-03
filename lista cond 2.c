#include <stdio.h>
#include <stdlib.h>




int main() {
    
    float numero1, numero2;

            printf("Digite o primeiro número: ");
            scanf("%f", &numero1);

                printf("Digite o segundo número: ");
                scanf("%f", &numero2);

                if (numero1 > numero2) {
                printf("O maior número é %.2f\n", numero1);
                 } else if (numero2 > numero1) {
                printf("O maior número é %.2f\n", numero2);
                } else {
                printf("Números iguais\n");
    }

    return 0;
}

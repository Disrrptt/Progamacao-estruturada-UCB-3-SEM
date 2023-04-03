#include <stdio.h>
#include <stdlib.h>

int main() {
    float altura, pesoIdeal;
    char sexo;

            printf("Digite a altura (em metros): ");
            scanf("%f", &altura);

            printf("Digite o sexo (M/F): ");
            scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem com %.2f m de altura é %.2f kg\n", altura, pesoIdeal);
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher com %.2f m de altura é %.2f kg\n", altura, pesoIdeal);
    } else {
        printf("Sexo inválido. Digite M ou F.\n");
    }

    return 0;
}

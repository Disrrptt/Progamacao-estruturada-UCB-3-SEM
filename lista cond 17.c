#include <stdio.h>
#include <math.h>

int main() {
    int op;
    float a, b, resultado;

    printf("Escolha uma das operações matemáticas:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");

    printf("Opção: ");
    scanf("%d", &op);

    printf("Digite dois valores numéricos: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case 1:
            resultado = a + b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 2:
            resultado = a - b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 3:
            resultado = a * b;
            printf("Resultado: %.2f\n", resultado);
            break;
        case 4:
            if (b != 0) {
                resultado = a / b;
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero\n");
            }
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    return 0;
}

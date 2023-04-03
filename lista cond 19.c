#include <stdio.h>
#include <math.h>

int main() {
    double valor;
    int notas[6] = {100, 50, 20, 10, 5, 2};
    double moedas[6] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    int qtd_notas[6] = {0};
    int qtd_moedas[6] = {0};

    scanf("%lf", &valor);

    
    int i = 0;
    while (valor >= 2) {
        if (valor >= notas[i]) {
            qtd_notas[i]++;
            valor -= notas[i];
        } else {
            i++;
        }
    }

   
    i = 0;
    while (valor > 0) {
        if (valor >= moedas[i]) {
            qtd_moedas[i]++;
            valor -= moedas[i];
        } else {
            i++;
        }
    }

   
    printf("NOTAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %d.00\n", qtd_notas[i], notas[i]);
    }

    printf("MOEDAS:\n");
    for (i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", qtd_moedas[i], moedas[i]);
    }

    return 0;
}

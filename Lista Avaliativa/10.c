#include <stdio.h>

int main() {
    int numeros[10], soma = 0;
    float media;

    printf("Digite 10 numeros inteiros:\n");

    for(int i = 0; i < 10; i++) {
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    media = (float) soma / 10;

    printf("A media dos numeros digitados e: %.2f\n", media);

    return 0;
}


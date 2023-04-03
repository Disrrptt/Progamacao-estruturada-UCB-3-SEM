#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    
    if (num % 3 == 0 && num % 5 == 0) {
        printf("%d é divisível por 3 e 5 simultaneamente.\n", num);
    } else if (num % 3 == 0) {
        printf("%d é divisível por 3.\n", num);
    } else if (num % 5 == 0) {
        printf("%d é divisível por 5.\n", num);
    } else {
        printf("%d não é divisível por 3 nem por 5.\n", num);
    }
    
    return 0;
}

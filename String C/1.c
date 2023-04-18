#include <stdio.h>
#include <string.h>

int main() {
   char nome[100];
   int tamanho;

   printf("Digite o nome completo do cliente: ");
   gets(nome);

   tamanho = strlen(nome);

   printf("O nome digitado tem %d caracteres.", tamanho);

   return 0;
}

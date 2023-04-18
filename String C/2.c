#include <stdio.h>
#include <string.h>

int main() {
   char cor[10];

   printf("Digite o nome da cor (branco, verde ou amarelo): ");
   scanf("%s", cor);

   if (strcmp(cor, "branco") == 0 || strcmp(cor, "verde") == 0 || strcmp(cor, "amarelo") == 0) {
      printf("Cor válida!");
   }
   else {
      printf("Cor inválida! Digite branco, verde ou amarelo.");
   }

   return 0;
}

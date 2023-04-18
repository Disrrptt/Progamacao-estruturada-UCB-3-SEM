#include <stdio.h>
#include <string.h>

int main() {
   char nome[50], sobrenome[50], cpf[12], senha[10];

   printf("Digite seu nome: ");
   scanf("%s", nome);

   printf("Digite seu sobrenome: ");
   scanf("%s", sobrenome);

   printf("Digite seu CPF (somente números): ");
   scanf("%s", cpf);

   // Gera a senha do usuário
   senha[0] = nome[0];
   senha[1] = sobrenome[0];
   senha[2] = cpf[0];
   senha[3] = cpf[1];
   senha[4] = cpf[2];
   senha[5] = '\0'; // adiciona o caractere nulo para indicar o final da string

   printf("Senha de acesso: %s", senha);

   return 0;
}

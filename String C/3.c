#include <stdio.h>
#include <string.h>

int main() {
   char nome[100], email[100], endereco[100];
   char nome_backup[100], email_backup[100], endereco_backup[100];

   printf("Digite o nome completo do usuário: ");
   gets(nome);
   printf("Digite o e-mail do usuário: ");
   gets(email);
   printf("Digite o endereço do usuário: ");
   gets(endereco);

   // Faz backup dos dados do usuário
   strcpy(nome_backup, nome);
   strcpy(email_backup, email);
   strcpy(endereco_backup, endereco);

   // Exibe os backups dos dados do usuário
   printf("Backup dos dados do usuário:\n");
   printf("Nome completo: %s\n", nome_backup);
   printf("E-mail: %s\n", email_backup);
   printf("Endereço: %s\n", endereco_backup);

   return 0;
}

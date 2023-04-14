#include <stdio.h>
#include <stdlib.h>

int main() {
    // inicializa as variáveis de controle
    int opcao, quantidade, maior, menor, primeiro = 1;
    // inicializa a variável de total da compra
    float total = 0;
    
    // exibe o menu de frutas e solicita a opção do usuário
    do {
        printf("Escolha uma opcao de fruta:\n");
        printf("1 - ABACAXI - 5,00 a unidade\n");
        printf("2 - MACA - 1,00 a unidade\n");
        printf("3 - PERA - 4,00 a unidade\n");
        printf("Digite 0 para encerrar a compra.\n");
        scanf("%d", &opcao);
        
        // verifica se o usuário quer encerrar a compra
        if (opcao == 0) {
            break;
        }
        
        // solicita a quantidade de frutas e calcula o valor da compra
        printf("Digite a quantidade de frutas: ");
        scanf("%d", &quantidade);
        switch(opcao) {
            case 1:
                total += quantidade * 5;
                break;
            case 2:
                total += quantidade * 1;
                break;
            case 3:
                total += quantidade * 4;
                break;
            default:
                printf("Opcao invalida.\n");
                continue;
        }
        
        // verifica se é o primeiro item da compra e atualiza o maior e o menor valor
        if (primeiro) {
            maior = menor = total;
            primeiro = 0;
        } else {
            if (total > maior) {
                maior = total;
            }
            if (total < menor) {
                menor = total;
            }
        }
        
    } while (opcao != 0);
    
    // exibe o valor total da compra e o maior e menor valor
    printf("O valor total da compra foi de %.2f reais.\n", total);
    printf("O maior valor foi de %.2f reais e o menor valor foi de %.2f reais.\n", maior, menor);
    
    return 0;
}

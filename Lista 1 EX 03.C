#include <stdio.h>
#include <stdlib.h> 

    int main(){
        int numeroInteiro;
        float numeroReal1;
        float numeroReal2; 
        char umaLetra;
        char umaString[100];


        printf("Escreva o primeiro numero inteiro./n");
        scanf("%d",&numeroInteiro);

        printf("Escreva o primeiro numero real./n");
        scanf("%f",&numeroReal1);

        printf("Escreva o primeiro numero real./n");
        scanf("%.2f",&numeroReal2);

        printf("Escreva uma letra./n");
        scanf("%c",&umaLetra);

        printf("Escreva um texto./n");
        scanf("%s", &umaString);


    printf("Numero inteiro: /n", &numeroInteiro);
        printf("Numero Real 1: /n", &numeroReal1);
            printf("Numero Real 2: /n", &numeroReal2);
                printf("Uma Letra: /n", &umaLetra);
                    printf("Um tetxo: /n", &umaString);



return 0 

}
    
    
    

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
float h, Peso;

        printf("Digite sua altura:");
        scanf("%f", &h);

        printf("Digite sua peso:");
        scanf("%f", &Peso);

        if(h < 1.20 && Peso <= 60)
     printf("A");
  
        if (h<1.20 && Peso >=60 && peso<=90)
     printf("D");
   
        if (h<1.20 && Peso>90)
     printf("G");

        if (h>1.20 && h<1.70 && Peso<=60)
     printf("B");
    
        if(h>1.20 && h<1.70 && Peso >=60 && Peso<=90)
     printf("E");
   
        if (h>1.20 && h<1.70 && Peso>90)
     printf("H");

        if(h > 1.70 && Peso <= 60)
     printf("C");
  
        if (h>1.70 && Peso >=60 && Peso<=90)
     printf("F");
   
        if (h>1.70 && Peso>90)
     printf("i");
}
#include <stdio.h>

int main() {
    int nota = 0;

    printf("Entre com a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);

     if (nota == 1) {
        printf("Ganhou 1 estrela!\n");
     } else if (nota == 2) {
         printf("Ganhou 2 estrelas!\n");
     } else if (nota == 3) {
         printf("Ganhou 3 estrelas!\n");
     } else if (nota == 4) {
         printf("Ganhou 4 estrelas!\n");
     } else if (nota == 5) {
         printf("Ganhou 5 estrelas!\n");
     } else {
         printf("Nota invalida!\n");
     }
     return 0;
}
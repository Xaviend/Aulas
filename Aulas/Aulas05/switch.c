#include <stdio.h>
#include <stdlib.h>
int main() {
    int nota = 0;

    printf("Entre com a nota do motorista: ");
    int deu_certo = scanf("%i", &nota);

    // if (nota == 1) {
    //     printf("Ganhou 1 estrela!\n");
    // } else if (nota == 2) {
    //     printf("Ganhou 2 estrelas!\n");
    // } else if (nota == 3) {
    //     printf("Ganhou 3 estrelas!\n");
    // } else if (nota == 4) {
    //     printf("Ganhou 4 estrelas!\n");
    // } else if (nota == 5) {
    //     printf("Ganhou 5 estrelas!\n");
    // } else {
    //     printf("Nota invalida!\n");
    // }

    switch(nota) {
        case 1: printf("Ganhou 1 estrela!\n");break;
        case 2: printf("Ganhou 2 estrelas!\n");break;
        case 3: printf("Ganhou 3 estrelas!\n");break;
        case 4: printf("Ganhou 4 estrelas!\n");break;
        case 5: printf("Ganhou 5 estrelas!\n");break;
        default: printf("Nota invalida!\n");
    }
    printf("______________________\n");
    printf("MENU PRINCIPAL\n");
    printf("______________________\n");
    printf("1 - Consulta saldo\n");
    printf("2 - Recarrega saldo\n");
    printf("3 - Ver recados\n");
    printf("4 - Ultimas ligacoes\n");
    printf("5 - Sair\n");
    printf("Entre com a opcao => ");
    int opcao = 0;
    deu_certo = scanf("%i",&opcao);
    
    switch (opcao)
    {
    case 1: printf("Saldo de R$20.000\n"); break;
    case 2: printf("Escolha um valor\n"); break;
    case 3: printf("Você tem 5 recados\n"); break;
    case 4: printf("(61) 98753-9999---(61) 97655-4444"); break;
    case 5: printf("Até logo\n"); break;
    default: printf("Opção invalida");break;
    }
    return 0;
}
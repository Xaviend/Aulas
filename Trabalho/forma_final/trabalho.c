#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

#define NUMERO_DE_TENTATIVAS 5
#define TAMANHO_MAXIMO_NOME 50

int main(void)  {
    //imprime cabecalho do jogo
    printf("******************************************\n");
    printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
    printf("******************************************\n");

    // Variável para armazenar o nome do jogador
    char nome[TAMANHO_MAXIMO_NOME];

    // Pede o nome do jogador
    printf("Digite o seu nome: ");
    fgets(nome, TAMANHO_MAXIMO_NOME, stdin);
    // Remover o caractere de nova linha do final do nome
    nome[strcspn(nome, "\n")] = 0;

    // Inicializa o gerador de números aleatórios
    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;

    int acertou = 0;
    int numerodetentativas = 5;

    // Loop de tentativas
    for(int i = 1; i <= numerodetentativas; i++) {
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);
       
       
        if (scanf("%d", &chute) != 1 || chute < 1 || chute > 100) {
            printf("Chute inválido! Por favor, insira um número entre 1 e 100.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;  // Volta a pedir o chute
       }
       
        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou) {
            break;
        }
        else if(maior) {
            printf("Seu chute foi maior que o número secreto\n");
        }
        else {
            printf("Seu chute foi menor que o número secreto\n");
        }
    // Cálculo da pontuação baseado na proximidade
               
        double diferenca = fabs(chute - numerosecreto);  // Diferença entre chute e número secreto
        
        double pontosperdidos = (diferenca / 100) * PONTOS_INICIAIS; // Penalização linear
        
        pontos -= pontosperdidos;

    // Garantir que os pontos não sejam negativos
        if (pontos < 0) {
            pontos = 0;
            }

    // Mostrar a pontuação restante após cada tentativa
                
        printf("Pontuação restante: %.1f\n", pontos);
        
            
                tentativas++;

        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo!\n");

    // Exibir o resultado do jogo
    if(acertou) {
        printf("Parabéns, %s! Você ganhou!\n", nome);
        printf("Você acertou em %d tentativas!\n", tentativas);
        printf("Total de pontos: %.1f\n", pontos);
    } else {
        printf("Que pena, %s! Você perdeu. O número secreto era %d.\n", nome, numerosecreto);
        printf("Total de pontos: %.1f\n", pontos);
    }

    // Abrir o arquivo para salvar a pontuação
    FILE *arquivo = fopen("pontuacoes.txt", "a");
    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo para salvar as pontuações.\n");
        return 1;
    }

    // Salvar o nome e a pontuação no arquivo
    fprintf(arquivo, "Nome: %s, Pontuação: %.1f\n", nome, pontos);

    // Fechar o arquivo
    fclose(arquivo);

    printf("Sua Pontuação foi salva'.\n");

    // Exibir as pontuações anteriores após o jogo
    arquivo = fopen("pontuacoes.txt", "r");
    if(arquivo == NULL) {
        printf("Nenhuma pontuação anterior foi encontrada.\n");
    } else {
        printf("\n*********** PONTUAÇÕES ANTERIORES ***********\n");
        char linha[100];

        // Ler cada linha do arquivo e exibi-la
        while(fgets(linha, sizeof(linha), arquivo) != NULL) {
            printf("%s", linha);
        }

        printf("********************************************\n\n");

        // Fechar o arquivo após a leitura
        fclose(arquivo);
    }

    return 0;
}

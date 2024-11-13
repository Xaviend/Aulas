#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define NUMERO_DE_TENTATIVAS 5
#define TAMANHO_MAXIMO_NOME 50
#define TAMANHO_MAXIMO_LINHA 100
#define PONTOS_INICIAIS 1000

int main(void) {
    // Definição da estrutura dentro da função main
    typedef struct {
        char nome[TAMANHO_MAXIMO_NOME];
        double pontos;
    } Jogador;

    int opcao;

    do {
        // Exibir menu
        printf("******************************************\n");
        printf("* Bem-vindo ao nosso jogo de adivinhação *\n");
        printf("******************************************\n");
        printf("Selecione uma opção:\n");
        printf("1. Jogar\n");
        printf("2. Exibir Ranking\n");
        printf("3. Sair\n");
        printf("Opção: ");
        
        // Verifica se a opção inserida é um número válido
        if (scanf("%d", &opcao) != 1) {
            printf("Opção inválida! Tente novamente.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
            continue;  // Volta ao início do loop
        }
        
        getchar(); // Para capturar o caractere de nova linha após o número

        if (opcao == 1) {
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
            double pontos = PONTOS_INICIAIS;

            int acertou = 0;
            int numerodetentativas = NUMERO_DE_TENTATIVAS;

            // Loop de tentativas
            for (int i = 1; i <= numerodetentativas; i++) {
                printf("Tente advinhar um numero de 1 à 100\n");
                printf("Tentativa %d\n", tentativas);
                printf("Qual é o seu chute? ");

                scanf("%d", &chute);
                printf("Seu chute foi %d\n", chute);

                if (chute < 0) {
                    printf("Você não pode chutar números negativos!\n");
                    continue;
                }

                acertou = (chute == numerosecreto);
                int maior = chute > numerosecreto;

                if (acertou) {
                    break;
                } else if (maior) {
                    printf("Seu chute foi maior que o número secreto\n");
                } else {
                    printf("Seu chute foi menor que o número secreto\n");
                }

                // Cálculo da pontuação baseado na proximidade
                double diferenca = fabs(chute - numerosecreto);  // Diferença entre chute e número secreto
                double pontosperdidos = (diferenca / numerosecreto) * PONTOS_INICIAIS;
                pontos = pontos - pontosperdidos;

                // Garantir que os pontos não sejam negativos
                if (pontos < 0) {
                    pontos = 0;
                }

                tentativas++;
            }

            printf("Fim de jogo!\n");

            // Exibir o resultado do jogo
            if (acertou) {
                printf("Parabéns, %s! Você ganhou!\n", nome);
                printf("Você acertou em %d tentativas!\n", tentativas);
                printf("Total de pontos: %.1f\n", pontos);
            } else {
                printf("Que pena, %s! Você perdeu. O número secreto era %d.\n", nome, numerosecreto);
                // Imprime a caveira em formato ASCII
                printf("       _____ \n");
                printf("      /     \\ \n");
                printf("     | () () |\n");
                printf("      \\  ^  / \n");
                printf("       ||||| \n");
                printf("       ||||| \n");
                printf("Total de pontos: %.1f\n", pontos);
            }

            // Abrir o arquivo para salvar a pontuação
            FILE *arquivo = fopen("pontuacoes.txt", "a");
            if (arquivo == NULL) {
                printf("Erro ao abrir o arquivo para salvar as pontuações.\n");
                return 1;
            }

            // Salvar o nome e a pontuação no arquivo
            fprintf(arquivo, "Nome: %s, Pontuação: %.1f\n", nome, pontos);

            // Fechar o arquivo
            fclose(arquivo);

            printf("Sua pontuação foi salva.\n");

        } else if (opcao == 2) {
            // Exibir as pontuações anteriores
            FILE *arquivo = fopen("pontuacoes.txt", "r");
            if (arquivo == NULL) {
                printf("Nenhuma pontuação anterior foi encontrada.\n");
            } else {
                printf("\n*********** PONTUAÇÕES ANTERIORES ***********\n");
                char linha[TAMANHO_MAXIMO_LINHA];

                // Ler cada linha do arquivo e exibi-la
                while (fgets(linha, sizeof(linha), arquivo) != NULL) {
                    printf("%s", linha);
                }

                printf("********************************************\n\n");

                // Fechar o arquivo após a leitura
                fclose(arquivo);
            }
        } else if (opcao != 3) {
            printf("Opção inválida! Tente novamente.\n");
        }

    } while (opcao != 3);

    printf("Saindo do jogo. Até a próxima!\n");

    return 0;
    //Iury Xavier Bomfim 2412130039
    // Bernardo Felipe Silva Sousa 2412130075
}

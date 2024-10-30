#include <stdio.h>

int main() {
    // Declaração de um vetor de caracteres para o nome
    char nome[31]; // 30 caracteres + 1 para o terminador nulo

    // Leitura do nome
    printf("Digite seu nome (max. 30 caracteres): ");
    fgets(nome, sizeof(nome), stdin); // Lê até 30 caracteres ou até nova linha

    // Impressão do nome
    printf("Olá  %s , seja bem vindo(a)", nome);

    return 0;
}
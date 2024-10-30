/*#include <stdio.h>

int main() {
    // Declaração de um vetor de inteiros com 5 elementos
    int vetor[5] = {10, 20, 30, 40, 50};

    // Impressão dos elementos do vetor
    printf("Elementos do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, vetor[i]);
    }

    return 0;
}*/

#include <stdio.h>

int main() {
    int vetor[5];

    // Leitura dos valores do vetor
    printf("Digite 5 elementos para o vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    // Impressão dos elementos do vetor
    printf("Elementos do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento [%d]: %d\n", i, vetor[i]);
    }

    return 0;
}
/*#include <stdio.h>

int main() {
    // Declaração e inicialização de uma matriz 3x3 de caracteres
    char matriz[3][3] = {
        {'A', 'B', 'C'},
        {'D', 'E', 'F'},
        {'G', 'H', 'I'}
    };

    // Impressão da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    // Declaração de uma matriz 3x3
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Impressão da matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); // Nova linha após cada linha da matriz
    }

    return 0;
}
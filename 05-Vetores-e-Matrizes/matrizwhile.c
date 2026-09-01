#include <stdio.h>
int main()
{
    int m, n, i, j;

    printf("Quantas linhas vai ter a matriz? ");
    while (scanf("%d", &m) != 1 || m <= 0) {
        printf("Entrada inválida. Insira um número inteiro positivo para as linhas: ");
        while (getchar() != '\n'); // Limpa o buffer
    }

    printf("Quantas colunas vai ter a matriz? ");
    while (scanf("%d", &n) != 1 || n <= 0) {
        printf("Entrada inválida. Insira um número inteiro positivo para as colunas: ");
        while (getchar() != '\n'); // Limpa o buffer
    }

    int mat[m][n];

    // Leitura da matriz
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d] : ", i, j);
            while (scanf("%d", &mat[i][j]) != 1) {
                printf("Entrada inválida. Insira um número inteiro para [%d,%d]: ", i, j);
                while (getchar() != '\n'); // Limpa o buffer
            }
        }
    }

    // Exibição da matriz
    printf("\nMATRIZ DIGITADA:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]); // Exibe os elementos na mesma linha
        }
        printf("\n"); // Quebra a linha após cada linha da matriz
    }

    return 0;
}

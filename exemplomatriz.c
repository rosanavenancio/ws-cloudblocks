#include <stdio.h>
int main()
{
    int m, n, i, j;

    // Leitura das dimensões da matriz
    printf("Quantas linhas vai ter a matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas vai ter a matriz? ");
    scanf("%d", &n);

    int mat[m][n];

    // Leitura dos elementos da matriz
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Exibição da matriz
    printf("\nMATRIZ DIGITADA:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", mat[i][j]); // Espaço entre os elementos
        }
        printf("\n"); // Quebra de linha após cada linha da matriz
    }

    return 0;
}

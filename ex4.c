#include <stdio.h>
#include <stdlib.h>

int** calcularMatrizTransposta(int** matriz, int m, int n) {
    int** transposta = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        transposta[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    return transposta;
}

void imprimirMatriz(int** matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &m);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &n);

    int** matriz = (int**)malloc(m * sizeof(int*));
    for (int i = 0; i < m; i++) {
        matriz[i] = (int*)malloc(n * sizeof(int));
    }

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int** transposta = calcularMatrizTransposta(matriz, m, n);
    printf("Matriz original:\n");
    imprimirMatriz(matriz, m, n);
    printf("Matriz transposta:\n");
    imprimirMatriz(transposta, n, m);

    for (int i = 0; i < m; i++) {
        free(matriz[i]);
    }
    free(matriz);

    for (int i = 0; i < n; i++) {
        free(transposta[i]);
    }
    free(transposta);

    return 0;
}

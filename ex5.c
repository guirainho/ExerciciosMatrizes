#include <stdio.h>
#include <stdlib.h>

int** somarMatrizes(int** A, int** B, int n, int m) {
    int** C = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        C[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    return C;
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
    int n, m;
    printf("Digite o número de linhas das matrizes: ");
    scanf("%d", &n);
    printf("Digite o número de colunas das matrizes: ");
    scanf("%d", &m);

    int** A = (int**)malloc(n * sizeof(int*));
    int** B = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(m * sizeof(int));
        B[i] = (int*)malloc(m * sizeof(int));
    }

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    int** C = somarMatrizes(A, B, n, m);
    printf("Matriz A:\n");
    imprimirMatriz(A, n, m);
    printf("Matriz B:\n");
    imprimirMatriz(B, n, m);
    printf("Matriz C (A + B):\n");
    imprimirMatriz(C, n, m);

    for (int i = 0; i < n; i++) {
        free(A[i]);
        free(B[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}

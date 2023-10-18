#include <stdio.h>
#include <stdlib.h>

int** multiplicarMatrizPorVetor(int** A, int* B, int n) {
    int** C = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        C[i] = (int*)malloc(sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        C[i][0] = 0; // Inicializa cada elemento de C com zero
        for (int j = 0; j < n; j++) {
            C[i][0] += A[i][j] * B[j];
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
    int n;
    printf("Digite o tamanho da matriz quadrada e o tamanho do vetor: ");
    scanf("%d", &n);

    int** A = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        A[i] = (int*)malloc(n * sizeof(int));
    }

    int* B = (int*)malloc(n * sizeof(int));

    printf("Digite os elementos da matriz A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &B[i]);
    }

    int** C = multiplicarMatrizPorVetor(A, B, n);

    printf("Matriz A:\n");
    imprimirMatriz(A, n, n);
    printf("Vetor B:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", B[i]);
    }
    printf("Matriz C (A * B):\n");
    imprimirMatriz(C, n, 1);

    for (int i = 0; i < n; i++) {
        free(A[i]);
        free(C[i]);
    }
    free(A);
    free(B);
    free(C);

    return 0;
}

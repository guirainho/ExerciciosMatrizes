#include <stdio.h>
#include <stdbool.h>

bool verificarMatrizDiagonal(int matriz[][10], int linhas, int colunas) {
    if (linhas != colunas) {
        return false; 
    }

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (i != j && matriz[i][j] != 0) {
                return false; 
            }
        }
    }

    return true; 
}

int main() {
    int linhas, colunas;
    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[10][10];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    bool ehMatrizDiagonal = verificarMatrizDiagonal(matriz, linhas, colunas);

    if (ehMatrizDiagonal) {
        printf("A matriz é uma matriz diagonal.\n");
    } else {
        printf("A matriz NÃO é uma matriz diagonal.\n");
    }

    return 0;
}

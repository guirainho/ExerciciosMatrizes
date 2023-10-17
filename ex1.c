#include <stdio.h>

// Função para calcular o traço de uma matriz quadrada
int calcularTraco(int matriz[][10], int tamanho) {
    int traco = 0;

    for (int i = 0; i < tamanho; i++) {
        traco += matriz[i][i];
    }

    return traco;
}

int main() {
    int tamanho;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[10][10];  // Supomos um tamanho máximo de 10x10, você pode ajustar conforme necessário.

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int traco = calcularTraco(matriz, tamanho);
    printf("O traço da matriz é: %d\n", traco);

    return 0;
}

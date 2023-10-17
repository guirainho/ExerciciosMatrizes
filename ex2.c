#include <stdio.h>

int calcularSomaDiagonalSecundaria(int matriz[][10], int tamanho) {
    int soma = 0;

    for (int i = 0; i < tamanho; i++) {
        soma += matriz[i][tamanho - 1 - i];
    }

    return soma;
}

int main() {
    int tamanho;
    printf("Digite o tamanho da matriz quadrada: ");
    scanf("%d", &tamanho);

    int matriz[10][10];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    int somaDiagonalSecundaria = calcularSomaDiagonalSecundaria(matriz, tamanho);
    printf("A soma da diagonal secundária é: %d\n", somaDiagonalSecundaria);

    return 0;
}

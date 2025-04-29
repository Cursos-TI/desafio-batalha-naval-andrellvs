// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>  // Inclui biblioteca padrão de entrada e saída

#define TAMANHO 10  // Define o tamanho do tabuleiro (10x10)

int main() {
    int tabuleiro[TAMANHO][TAMANHO]; // Cria o tabuleiro

    // Inicializa o tabuleiro preenchendo tudo com 0 (água)
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionar navios HORIZONTAIS/VERTICAIS (valor 3)
    // Navio horizontal (linha 2, colunas 1-4)
    for (int j = 1; j <= 4; j++) {
        tabuleiro[1][j] = 3;
    }

    // Navio vertical (coluna 7, linhas 5-8)
    for (int i = 5; i <= 8; i++) {
        tabuleiro[i][7] = 3;
    }

    // Posicionar navios DIAGONAIS
    // Navio diagonal principal (linha=coluna), posições 0-3
    for (int i = 0; i <= 3; i++) {
        if (tabuleiro[i][i] == 0) { // Verifica para não sobrepor
            tabuleiro[i][i] = 3;
        }
    }

    // Navio diagonal secundária (linha+i, coluna=9-i), posições 6-9
    for (int i = 6; i <= 9; i++) {
        int coluna = 9 - i; // Cálculo da coluna da diagonal secundária
        if (tabuleiro[i][coluna] == 0) { // Verifica para não sobrepor
            tabuleiro[i][coluna] = 3;
        }
    }

    // Imprime o título do tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");

    // Imprime o cabeçalho de letras
    printf("   A B C D E F G H I J\n");

    // Imprime o tabuleiro
    for (int i = 0; i < TAMANHO; i++) {
        if (i < 9) {
            printf(" %d ", i + 1); // Para linhas 1-9
        } else {
            printf("%d ", i + 1); // Linha 10
        }

        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime cada posição
        }

        printf("\n"); // Quebra de linha no final de cada linha
    }

    return 0; // Finaliza o programa
}
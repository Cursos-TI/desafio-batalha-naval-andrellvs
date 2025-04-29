// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

#define TAMANHO 10  // Define o tamanho do tabuleiro (10x10)

int main() {
    int tabuleiro[TAMANHO][TAMANHO] = {0};  // Cria o tabuleiro e preenche com 0 (água)

    // === DESENHA UMA CRUZ 5x5 COM O NÚMERO 3 ===
    // A cruz tem um traço vertical e um horizontal que se cruzam no meio
    int centro_linha = 2, centro_coluna = 2;  // Define o centro da cruz
    for (int i = centro_linha - 2; i <= centro_linha + 2; i++) {
        if (i >= 0 && i < TAMANHO)
            tabuleiro[i][centro_coluna] = 3;  // Linha vertical da cruz
    }
    for (int j = centro_coluna - 2; j <= centro_coluna + 2; j++) {
        if (j >= 0 && j < TAMANHO)
            tabuleiro[centro_linha][j] = 3;  // Linha horizontal da cruz
    }

    // === DESENHA UM TRIÂNGULO COM O NÚMERO 1 ===
    // A base está na linha 9 e ele vai afunilando para o topo
    tabuleiro[6][3] = 1;
    tabuleiro[7][2] = 1; tabuleiro[7][3] = 1; tabuleiro[7][4] = 1;
    tabuleiro[8][1] = 1; tabuleiro[8][2] = 1; tabuleiro[8][3] = 1;
    tabuleiro[8][4] = 1; tabuleiro[8][5] = 1;

    // === DESENHA UM LOSANGO COM O NÚMERO 2 ===
    // O centro está em (5,7), com camadas que formam o losango
    tabuleiro[3][7] = 2;
    tabuleiro[4][6] = 2; tabuleiro[4][7] = 2; tabuleiro[4][8] = 2;
    tabuleiro[5][5] = 2; tabuleiro[5][6] = 2; tabuleiro[5][7] = 2;
    tabuleiro[5][8] = 2; tabuleiro[5][9] = 2;
    tabuleiro[6][6] = 2; tabuleiro[6][7] = 2; tabuleiro[6][8] = 2;
    tabuleiro[7][7] = 2;

    // === IMPRIME O TÍTULO E O CABEÇALHO ===
    printf("TABULEIRO BATALHA NAVAL\n");
    printf("   A B C D E F G H I J\n");

    // === IMPRIME O TABULEIRO COM OS NÚMEROS ===
    for (int i = 0; i < TAMANHO; i++) {
        printf("%2d ", i + 1);  // Mostra o número da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);  // Mostra o valor de cada célula
        }
        printf("\n");  // Pula para a próxima linha
    }

    return 0;  // Fim do programa
}

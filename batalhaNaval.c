// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>  // Inclui a biblioteca padrão de entrada e saída

int main() {
    int tabuleiro[10][10]; // Declara uma matriz 10x10 para representar o tabuleiro

    // Inicializa o tabuleiro preenchendo todas as posições com 0
    for (int i = 0; i < 10; i++) {         // Loop para percorrer as linhas
        for (int j = 0; j < 10; j++) {      // Loop para percorrer as colunas
            tabuleiro[i][j] = 0;            // Atribui o valor 0 a cada posição
        }
    }

    // Preenche a linha 3, colunas D, E e F com o número 3
    for (int j = 3; j <= 5; j++) { // Colunas D (índice 3), E (4) e F (5)
        tabuleiro[2][j] = 3;       // Linha 3 no tabuleiro é índice 2 (pois começa em 0)
    }

    // Imprime o título do tabuleiro
    printf("TABULEIRO BATALHA NAVAL\n");

    // Imprime o cabeçalho com as letras de A a J, bem alinhado
    printf("   A B C D E F G H I J\n"); // Note 3 espaços antes para alinhar

    // Imprime o corpo do tabuleiro linha por linha
    for (int i = 0; i < 10; i++) { // Loop para cada linha do tabuleiro
        if (i < 9) {
            // Para linhas de 1 a 9: imprime o número seguido de espaço (ex: " 1 ")
            printf(" %d ", i + 1);
        } else {
            // Para a linha 10: imprime o número sem espaço extra (ex: "10 ")
            printf("%d ", i + 1);
        }
        
        // Imprime todas as colunas daquela linha
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Imprime o valor da célula com espaço depois
        }
        
        printf("\n"); // Pula para a próxima linha após imprimir todas as colunas
    }

    return 0; // Finaliza o programa com sucesso
}
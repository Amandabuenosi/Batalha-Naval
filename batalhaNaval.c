#include <stdio.h>
#include <stdlib.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    int tabuleiro [LINHAS][COLUNAS]={0}; //tabuleiro inicializado
  
    char nomeColunas []= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // matriz nome Colunas.

   // Inserindo navios na matriz **********************************
    //navio 1 vertical
    tabuleiro[8][1] = 3;
    tabuleiro[8][2] = 3;
    tabuleiro[8][3] = 3;
    //navio 1 horizontal
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;
    //navio 1 na diagonal primária ↘
    int tamanho = 3;
    int inicio_linha = 0, inicio_coluna =7; //coordenadas inicias da matriz
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[inicio_linha + i][inicio_coluna + i] = 3; // diagonal ↘
    };
    //navio 2 na diagonal secundária ↙
    int tamanho2 = 3;
    int inicio_linha2 = 4, inicio_coluna2 =6; //coordenadas inicias da matriz
    for (int i = 0; i < tamanho; i++) {
        tabuleiro[inicio_linha2 + i][inicio_coluna2- i] = 3; // diagonal ↙
    };

    // Matrizes de Habilidade **********************************
    int cone[5][5], cruz[5][5], octaedro[5][5];

    // Cone (5x5): origem no topo, abre para baixo.
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 0 && j == 2) cone[i][j] = 1;
            else if (i == 1 && j >= 1 && j <= 3) cone[i][j] = 1;
            else if (i == 2) cone[i][j] = 1;
            else cone[i][j] = 0;
        }
    }

    // Cruz (5x5): origem no centro
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == 2 || j == 2) cruz[i][j] = 1;
            else cruz[i][j] = 0;
        }
    }

    // Octaedro (5x5): formato de losango
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (abs(i - 2) + abs(j - 2) <= 2) octaedro[i][j] = 1;
            else octaedro[i][j] = 0;
        }
    }

    // Aplicando habilidade cone no tabuleiro com origem em (2, 2)
    int origemLinha = 2, origemColuna = 2;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            int linha = origemLinha - 2 + i;
            int coluna = origemColuna - 2 + j;
            if (linha >= 0 && linha < LINHAS && coluna >= 0 && coluna < COLUNAS) {
                if (cone[i][j] == 1 && tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5; // marca como área afetada
                }
            }
        }
    }

    // Exibição do Tabuleiro com habilidades **********************************
    printf("\n~~~~~~~~~BATALHA NAVAL~~~~~~~~\n");
    printf("  ");
    for ( int c = 0; c < 10; c++){
        printf("  %c", nomeColunas[c]);
    }
    printf("\n");

    for (int linha = 0; linha < 10; linha++){
        printf("%2d",linha +1);
        for (int coluna = 0; coluna < 10; coluna++){
            if (tabuleiro[linha][coluna] == 0) printf("  0"); // água
            else if (tabuleiro[linha][coluna] == 3) printf("  3"); // navio
            else if (tabuleiro[linha][coluna] == 5) printf("  5"); // área afetada
            else printf("  %d", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}
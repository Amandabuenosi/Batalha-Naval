#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    int tabuleiro [LINHAS][COLUNAS]={0}; //tabuleiro inicializado com zeros e dois navios.
  
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

    
    // Exibições**********************************
    printf("\n~~~~~~~~~BATALHA NAVAL~~~~~~~~\n");
    printf("  "); // espaço para alinhar o ínicio do nome das Colunas.

     
    for ( int c = 0; c < 10; c++){ // linha com a nomeação das Colunas.
        printf("  ");
        printf("%c", nomeColunas[c]);
    };
        
    printf("\n"); // Inicia novo parágrafo com o tabuleiro.

    for (int linha = 0; linha < 10; linha++){//inicializando as linhas do tabuleiro
        printf("%2d",linha +1);//numero das linhas somando 1 a cada loop.
        
            for (int coluna = 0; coluna < 10; coluna++){ //inicializando as colunas do tabuleiro
                
                printf("  %d", tabuleiro[linha][coluna]); //exibição do tabuleiro.
                  
            }  
        
        printf("\n"); // novo parágrafo quando chega em 1x10, 2x10... 
    };

   
    
    return 0;
}

 
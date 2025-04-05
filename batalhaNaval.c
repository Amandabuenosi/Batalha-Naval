#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main (){

    int tabuleiro [LINHAS][COLUNAS]={0}; //tabuleiro inicializado com zeros e dois navios.
  
    char nomeColunas []= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'}; // matriz nome Colunas.

   // Inserindo navios na matriz **********************************
    //navio 1 vertical
    tabuleiro[1][1] = 3;
    tabuleiro[1][2] = 3;
    tabuleiro[1][3] = 3;
    //navio 1 horizontal
    tabuleiro[5][8] = 3;
    tabuleiro[6][8] = 3;
    tabuleiro[7][8] = 3;

    
    // Exibições**********************************

    printf("~~~~~~~~~BATALHA NAVAL~~~~~~~~\n");
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

 
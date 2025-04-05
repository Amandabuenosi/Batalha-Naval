#include <stdio.h>

int main (){

    int tabuleiro[10][10] = {0};  //tabuleiro inicializado com zeros
    
    char colunas []= {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

        int navioUm [3][1] = { //navio um na vertical ocupando 3 posições no tabuleiro.
        {3},
        {3},
        {3}
    };

    int navioDois [1][3] = {//navio dois na horizontal ocupando 3 posições no tabuleiro.
        {3, 3, 3}
    };


    // Exibições**********************************


    printf("~~~~~~~~~BATALHA NAVAL~~~~~~~~\n");
    printf("  "); // espaço para alinhar o inicio do nome das colunas.

    for ( int c = 0; c < 10; c++){ // linha com a nomeação das colunas.
        printf("  ");
        printf("%c", colunas[c]);};
        

    printf("\n"); // Inica novo parágrafo com o tabuleiro.

    for (int linha = 0; linha < 10; linha++){
        printf("%2d",linha +1);//numero das linhas somando 1 a cada loop.
        
            for (int tab = 0; tab < 10; tab++){ //Após colocar o numero da linha, soma um em 'linha' e 'tab', assim, mudando a coordenada da matriz p/ exibir.
                
                printf("  %d", tabuleiro[tab][linha]);

            }
            
            printf("\n"); // Inica novo parágrafo quando chega em 1x10, 2x10... 
            
    };
    
   
    
    return 0;
}
//

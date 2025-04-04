#include <stdio.h>

int main (){

    int tabuleiro[10][10] = { //tabuleiro de água criado 
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    char linhaAbc [][10] = { //--------------------------------------- AQUI
        {A, B, C, D, E, F, G, H, I, J}
    }
    int navioUm [3][1] = { //navio um na vertical ocupando 3 posições no tabuleiro.
        {3},
        {3},
        {3}
    };

    int navioDois [1][3] = {//navio dois na horizontal ocupando 3 posições no tabuleiro.
        {3, 3, 3}

    };
    printf("~~~BATALHA NAVAL~~~\n");
    for (int linha=0; linha < 10; linha++){
        for (int coluna = 0; coluna < 10 ; coluna++){
            printf("%d ", tabuleiro[linha][coluna]);
        }
        
        printf("\n");  // Nova linha ao fim de cada linha da matriz
        
    }
    
    return 0;
}

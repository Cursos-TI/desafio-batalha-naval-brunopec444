#include <stdio.h>

#define linhas 10
#define colunas 10

int main () {
    char letras[10] = {'A', 'B', 'C','D','E','F', 'G', 'H', 'I', 'J'};
    int indice = 0, zero = 0, navio = 3;
    int tabuleiro[linhas][colunas];
        

    printf("TABULEIRO DE BATALHA NAVAL\n\n");

    // Imprimindo cabeçalho (A B C D ...)
    printf("  "); // espaço para alinhar com os números das linhas
    while (indice < 10) {
        printf(" %c ", letras[indice]);
        indice++;
    }
    printf("\n");

    // Imprimindo o tabuleiro com números nas linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i+1);  // número da linha
        for (int j = 0; j < 10; j++) {
           tabuleiro[i][j] = zero;
           if (j > 6 && (i == 1 || i==7)){
           tabuleiro[i][j] = navio;
           } //navio horizontal
            if (i > 6 && (j == 1 || j==5)){
           tabuleiro[i][j] = navio;
           } //navio horizontal 
           
           printf( " %d ", tabuleiro[i][j], i, j); // imprimindo tabuleiro
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {

    int tabuleiro[10][10] = {0}; //Declaração das dimenções do tabuleiro

      int tabuleiro[10][10] = {0}; // Tabuleiro 10x10 preenchido com zeros

   // navio na diagonal 1
    tabuleiro[0][0] = 3;
    tabuleiro[1][1] = 3;
    tabuleiro[2][2] = 3;
    tabuleiro[3][3] = 3;

   //navio na diagonal 2
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;
    tabuleiro[3][6] = 3;

 // Impressão do cabeçalho com letras
    printf("  ");
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%c ", letra);
    }
   

    return 0;
}

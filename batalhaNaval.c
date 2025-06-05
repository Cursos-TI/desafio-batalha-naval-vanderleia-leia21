 #include <stdio.h>

int main() {
 char letras [10]; //Declaração das dimensões do tabuleiro 10x10

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
    printf("\n");

// Imprimir o tabuleiro com números das linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

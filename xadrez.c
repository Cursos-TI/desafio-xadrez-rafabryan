#include <stdio.h>

int main() {
    // Torre: movimenta-se 5 casas para a direita usando "for"
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Bispo: movimenta-se 5 casas na diagonal para cima e à direita usando "while"
    printf("Movimento do Bispo:\n");
    int j = 1;
    while (j <= 5) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // Rainha: movimenta-se 8 casas para a esquerda usando "do-while"
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= 8);
    // Movimento do Cavalo: duas casas para baixo e uma para a esquerda

    // Loop para mover duas casas para baixo
    for (int l = 0; l < 2; i++) {
        printf("Baixo\n");
    }

    // Linha em branco para separar os movimentos
    printf("\n");

    // Loop para mover uma casa para a esquerda
    int movimentos = 1;
    while (movimentos > 0) {
        printf("Esquerda\n");
        movimentos--;
    }

    return 0;
}

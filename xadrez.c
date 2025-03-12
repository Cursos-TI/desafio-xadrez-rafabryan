#include <stdio.h>

// Função recursiva para mover o Bispo (diagonal direita para cima)
void moverBispo(int passos, int x, int y) {
    if (passos == 0) return;  // Caso base

    printf("Diagonal Direita para Cima\n");

    // Chamada recursiva com novos valores de posição
    moverBispo(passos - 1, x + 1, y - 1);
}

// Função recursiva para mover a Torre (para a direita)
void moverTorre(int passos) {
    if (passos == 0) return;  // Caso base

    printf("Direita\n");

    // Chamada recursiva diminuindo os passos restantes
    moverTorre(passos - 1);
}

// Função recursiva para mover a Rainha (para a esquerda)
void moverRainha(int passos) {
    if (passos == 0) return;  // Caso base

    printf("Esquerda\n");

    // Chamada recursiva diminuindo os passos restantes
    moverRainha(passos - 1);
}

// Função para mover o Cavalo (em L para cima à direita)
void moverCavalo() {
    int i, j;

    // Loop para mover duas casas para cima
    for (i = 2; i > 0; i--) {
        if (i == 1) {
            printf("Cima\n");
            continue;  // Continua para a próxima iteração sem executar mais nada neste ciclo
        }
        printf("Cima\n");
    }

    // Loop para mover uma casa para a direita
    for (j = 1; j > 0; j--) {
        if (j == 0) break;  // Condição para interromper (não será necessária, mas exemplifica o uso de break)
        printf("Direita\n");
    }
}

int main() {
    // Movimentação das peças
    printf("Movimentação do Bispo:\n");
    moverBispo(5, 0, 0);

    printf("\nMovimentação da Torre:\n");
    moverTorre(5);

    printf("\nMovimentação da Rainha:\n");
    moverRainha(8);

    printf("\nMovimentação do Cavalo:\n");
    moverCavalo();

    return 0;
}

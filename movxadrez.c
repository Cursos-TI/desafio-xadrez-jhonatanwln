#include <stdio.h>

int main() {
    int i;

    // Movimento da TORRE - 5 casas para a direita (usando for)
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (usando while)
    printf("Movimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimento da RAINHA - 8 casas para a esquerda (usando do-while)
    printf("Movimento da Rainha (8 casas para a Esquerda):\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}

#include <stdio.h>

// Constantes de movimentação
#define MOV_BISPO 5       // Bispo se move 5 vezes
#define MOV_TORRE 5       // Torre se move 5 vezes
#define MOV_RAINHA 8      // Rainha se move 8 vezes

int main() {
    // --- BISPO ---
    // Movimenta 5 vezes na diagonal superior direita (Cima + Direita)
    printf("Movimentação do Bispo:\n");
    
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // --- TORRE ---
    // Movimenta 5 vezes para a direita
    printf("Movimentação da Torre:\n");

    int t = 0;
    while (t < MOV_TORRE) {
        printf("Direita\n");
        t++;
    }

    printf("\n");

    // --- RAINHA ---
    // Movimenta 8 vezes para a esquerda
    printf("Movimentação da Rainha:\n");

    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < MOV_RAINHA);

    printf("\n");

    return 0;
}
 
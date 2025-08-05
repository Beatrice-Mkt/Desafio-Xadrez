 #include <stdio.h>

// Função recursiva para mover o bispo (diagonal superior direita)
void moverBispo(int passo) {
    if (passo > 5) return;
    
    // loop aninhado para simular o movimento diagonal
    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Movimento %d: Cima e Direita\n", passo);
        }
    }
    moverBispo(passo + 1);
}

// Função recursiva para mover a torre (direita)
void moverTorre(int passo) {
    if (passo > 5) return;
    printf("Movimento %d: Direita\n", passo);
    moverTorre(passo + 1);
}

// Função recursiva para mover a rainha (esquerda)
void moverRainha(int passo) {
    if (passo > 8) return;
    printf("Movimento %d: Esquerda\n", passo);
    moverRainha(passo + 1);
}

// Movimento do cavalo: 2 para cima, 1 para a direita (em L)
void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    for (int i = 0, j = 0; i < 2 || j < 1; ) {
        if (i < 2) {
            printf("Cima\n");
            i++;
            continue;  // volta para cima até completar 2
        }
        if (j < 1) {
            printf("Direita\n");
            j++;
        }
        break;  // finaliza após completar o movimento em L
    }
}

int main() {
    printf("\n--- Bispo ---\n");
    moverBispo(1);

    printf("\n--- Torre ---\n");
    moverTorre(1);

    printf("\n--- Rainha ---\n");
    moverRainha(1);

    printf("\n--- Cavalo ---\n");
    moverCavalo();

    return 0;
}

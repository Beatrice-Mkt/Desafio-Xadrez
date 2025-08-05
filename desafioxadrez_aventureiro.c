 #include <stdio.h>

#define MOVIMENTOS_CAVALO 3  // Quantidade de movimentos em L do cavalo

int main() {
    printf("Movimentação do Cavalo em L:\n\n");

    // Loop externo com 'for' para repetir os movimentos em L
    for (int i = 1; i <= MOVIMENTOS_CAVALO; i++) {
        printf("Movimento %d:\n", i);

        // Loop interno com 'while' para as 2 casas para baixo
        int j = 0;
        while (j < 2) {
            printf("Baixo\n");
            j++;
        }

        // Após 2 movimentos para baixo, 1 movimento para esquerda
        printf("Esquerda\n\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // Declaracao de variaveis para o numero de casas que cada peca se move.

    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    
    printf("--- Simulacao de Movimento de Pecas de Xadrez ---\n\n");

    // --- Movimentacao da Torre (usandondo for) ---
    // A Torre se move 5 casas para a direita.
    printf("--> Movendo a Torre 5 casas para a direita:\n\n");
    // O loop 'for' e ideal pois sabemos o numero exato de repeticoes (5).
    for (int i = 0; i < torre; i++) {
        printf("Direita\n");
    }
    
    // --- Movimentacao do Bispo (usando while) ---
    // O Bispo se move 5 casas na diagonal para cima e a direita.
    printf("\n--> Movendo o Bispo 5 casas na diagonal superior direita:\n\n");
    // O loop 'while' e usado para demonstrar outra estrutura de repeticao.
    int contador = 0;
    while (contador < bispo) {
        printf("Cima Direita\n");
        contador++; // Incrementa o contador para evitar um loop infinito.
    }
    
    // --- Movimentacao da Rainha (usando do-while) ---
    // A Rainha se move 8 casas para a esquerda.
    printf("\n--> Movendo a Rainha 8 casas para a esquerda:\n\n");
    // O loop 'do-while' garante que o corpo do loop execute pelo menos uma vez.
    int R = 0;
    do {
        printf("Esquerda\n");
        R++; // Incrementa 'j' a cada iteracao.
    } while (R < rainha);
    
    printf("\nSimulacao de movimento concluida!\n");
    
    return 0;
}
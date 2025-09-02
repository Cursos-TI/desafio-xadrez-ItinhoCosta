#include <stdio.h>

// Funcao recursiva para a movimentacao da Torre
void moverTorre(int casas) {
    // Condicao de parada da recursao
    if (casas <= 0) {
        return; // A funcao para de ser chamada
    }
    printf("Direita\n");
    // Chamada recursiva para mover a proxima casa
    moverTorre(casas - 1);
}

// Funcao recursiva para a movimentacao da Rainha
void moverRainha(int casas) {
    if (casas <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Funcao recursiva para a movimentacao do Bispo
void moverBispo(int casas) {
    // A condicao de parada e quando as casas acabarem.
    if (casas <= 0) {
        return;
    }
    printf("Cima Direita\n");
    // A funcao se chama novamente, diminuindo o contador de casas.
    moverBispo(casas - 1);
}

int main() {
    printf("--- Simulacao de Movimento de Pecas de Xadrez - Nivel Mestre ---\n\n");
    
    // As variaveis sao usadas para passar o valor inicial para as funcoes
    int torre = 5;
    int rainha = 8;
    int bispo = 5;
    
    // --- Movimentacao da Torre (usando recursao) ---
    printf("--> Movendo a Torre 5 casas para a direita:\n\n");
    moverTorre(torre);
    
    // --- Movimentacao da Rainha (usando recursao) ---
    printf("\n--> Movendo a Rainha 8 casas para a esquerda:\n\n");
    moverRainha(rainha);
    
    // --- Movimentacao do Bispo (usando recursao) ---
    printf("\n--> Movendo o Bispo 5 casas na diagonal superior direita:\n\n");
    moverBispo(bispo);

    // --- Movimentacao do Cavalo (usando loops aninhados com break) ---
    printf("\n--> Movendo o Cavalo (em L) uma vez para cima e a direita:\n\n");
    
    int i, j;
    // O loop externo controla o movimento para cima
    for (i = 0; i < 2; i++) {
        // O loop interno controla o movimento para a direita
        for (j = 0; j < 1; j++) {
            printf("Cima\n"); // Primeira parte do "L"
        }
    }
    
    printf("Direita\n"); // Segunda parte do "L"

    // Uma implementacao alternativa e mais robusta com condicoes duplas e break
    printf("\n--> Movendo o Cavalo (em L) - Segunda forma (com break):\n\n");
    for (int passo_y = 0, passo_x = 0; passo_y < 2 || passo_x < 1; passo_y++, passo_x++) {
        // Logica para o movimento vertical (para cima)
        if (passo_y < 2) {
            printf("Cima\n");
        } else {
            // Se o movimento vertical ja foi completado, sai do loop
            break;
        }

        // Logica para o movimento horizontal (para a direita)
        if (passo_x < 1) {
            printf("Direita\n");
        } else {
            break;
        }
    }

    printf("\nSimulacao de movimento concluida!\n");
    
    return 0;
}